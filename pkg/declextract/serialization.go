// Copyright 2024 syzkaller project authors. All rights reserved.
// Use of this source code is governed by Apache 2 LICENSE that can be found in the LICENSE file.

package declextract

import (
	"bytes"
	"fmt"
	"strings"
)

func (ctx *context) serialize() {
	ctx.descriptions = new(bytes.Buffer)
	ctx.fmt(header)
	ctx.serializeIncludes()
	ctx.serializeEnums()
	ctx.serializeSyscalls()
	ctx.serializeFileOps()
	ctx.serializeNetlink()
	ctx.serializeStructs()
	ctx.serializeDefines()
}

const header = `# Code generated by syz-declextract. DO NOT EDIT.

meta automatic

type auto_todo int8

type auto_union[INFERRED, RAW] [
	inferred	INFERRED
	raw		RAW
]

`

func (ctx *context) fmt(msg string, args ...any) {
	fmt.Fprintf(ctx.descriptions, msg, args...)
}

func (ctx *context) serializeIncludes() {
	for _, inc := range ctx.Includes {
		ctx.fmt("include <%s>\n", inc)
	}
	ctx.fmt("\n")
}

func (ctx *context) serializeDefines() {
	for _, def := range ctx.Defines {
		ctx.fmt("define %v %v\n", def.Name, def.Value)
	}
	ctx.fmt("\n")
}

func (ctx *context) serializeSyscalls() {
	for _, call := range ctx.Syscalls {
		ctx.fmt("%v(", call.Func)
		for i, arg := range call.Args {
			ctx.fmt("%v%v %v", comma(i), arg.Name, arg.syzType)
		}
		ctx.fmt(") %v\n", call.returnType)
	}
	ctx.fmt("\n")
}

func (ctx *context) serializeEnums() {
	for _, enum := range ctx.Enums {
		ctx.fmt("%v = ", enum.Name)
		for i, val := range enum.Values {
			ctx.fmt("%v %v", comma(i), val)
		}
		ctx.fmt("\n")
	}
	ctx.fmt("\n")
}

func (ctx *context) serializeStructs() {
	for _, str := range ctx.Structs {
		delims := "{}"
		if str.IsUnion {
			delims = "[]"
		}
		ctx.fmt("%v %c\n", str.Name, delims[0])
		for _, f := range str.Fields {
			ctx.fmt("%v %v\n", f.Name, f.syzType)
		}
		ctx.fmt("%c", delims[1])
		var attrs []string
		if str.IsPacked {
			attrs = append(attrs, "packed")
		}
		if str.Align != 0 {
			attrs = append(attrs, fmt.Sprintf("align[%v]", str.Align))
		}
		if len(attrs) != 0 {
			ctx.fmt(" [%v]", strings.Join(attrs, ", "))
		}
		ctx.fmt("\n\n")
	}
}
