// AUTOGENERATED FILE

#if defined(__x86_64__) || 0
#define GOARCH "amd64"
#define SYZ_REVISION "9305c28557ddc3bab7ba88bc9958d26aca22e419"
#define SYZ_EXECUTOR_USES_FORK_SERVER false
#define SYZ_EXECUTOR_USES_SHMEM false
#define SYZ_PAGE_SIZE 4096
#define SYZ_NUM_PAGES 4096
#define SYZ_DATA_OFFSET 536870912
#define SYZ_SYSCALL_COUNT 162
const call_t syscalls[] = {
    {"chdir", 0, (syscall_t)chdir},
    {"chmod", 0, (syscall_t)chmod},
    {"chown", 0, (syscall_t)chown},
    {"close", 0, (syscall_t)close},
    {"creat", 0, (syscall_t)creat},
    {"dup", 0, (syscall_t)dup},
    {"dup2", 0, (syscall_t)dup2},
    {"dup3", 0, (syscall_t)dup3},
    {"faccessat", 0, (syscall_t)faccessat},
    {"fchmod", 0, (syscall_t)fchmod},
    {"fchmodat", 0, (syscall_t)fchmodat},
    {"fchown", 0, (syscall_t)fchown},
    {"fchownat", 0, (syscall_t)fchownat},
    {"fdatasync", 0, (syscall_t)fdatasync},
    {"fstat", 0, (syscall_t)fstat},
    {"fsync", 0, (syscall_t)fsync},
    {"ftruncate", 0, (syscall_t)ftruncate},
    {"getcwd", 0, (syscall_t)getcwd},
    {"getgid", 0, (syscall_t)getgid},
    {"getpid", 0, (syscall_t)getpid},
    {"getuid", 0, (syscall_t)getuid},
    {"lchown", 0, (syscall_t)lchown},
    {"link", 0, (syscall_t)link},
    {"linkat", 0, (syscall_t)linkat},
    {"lseek", 0, (syscall_t)lseek},
    {"lstat", 0, (syscall_t)lstat},
    {"mkdir", 0, (syscall_t)mkdir},
    {"mkdirat", 0, (syscall_t)mkdirat},
    {"open", 0, (syscall_t)open},
    {"openat", 0, (syscall_t)openat},
    {"pipe", 0, (syscall_t)pipe},
    {"poll", 0, (syscall_t)poll},
    {"ppoll", 0, (syscall_t)ppoll},
    {"preadv", 0, (syscall_t)preadv},
    {"pwritev", 0, (syscall_t)pwritev},
    {"read", 0, (syscall_t)read},
    {"readlink", 0, (syscall_t)readlink},
    {"readlinkat", 0, (syscall_t)readlinkat},
    {"readv", 0, (syscall_t)readv},
    {"rename", 0, (syscall_t)rename},
    {"renameat", 0, (syscall_t)renameat},
    {"rmdir", 0, (syscall_t)rmdir},
    {"select", 0, (syscall_t)select},
    {"stat", 0, (syscall_t)stat},
    {"symlink", 0, (syscall_t)symlink},
    {"symlinkat", 0, (syscall_t)symlinkat},
    {"sync", 0, (syscall_t)sync},
    {"syz_future_time", 0, (syscall_t)syz_future_time},
    {"syz_job_default", 0, (syscall_t)syz_job_default},
    {"syz_mmap", 0, (syscall_t)syz_mmap},
    {"syz_process_self", 0, (syscall_t)syz_process_self},
    {"syz_thread_self", 0, (syscall_t)syz_thread_self},
    {"syz_vmar_root_self", 0, (syscall_t)syz_vmar_root_self},
    {"truncate", 0, (syscall_t)truncate},
    {"unlink", 0, (syscall_t)unlink},
    {"unlinkat", 0, (syscall_t)unlinkat},
    {"utime", 0, (syscall_t)utime},
    {"utimensat", 0, (syscall_t)utimensat},
    {"utimes", 0, (syscall_t)utimes},
    {"write", 0, (syscall_t)write},
    {"writev", 0, (syscall_t)writev},
    {"zx_channel_call", 0, (syscall_t)zx_channel_call},
    {"zx_channel_create", 0, (syscall_t)zx_channel_create},
    {"zx_channel_read", 0, (syscall_t)zx_channel_read},
    {"zx_channel_read_etc", 0, (syscall_t)zx_channel_read_etc},
    {"zx_channel_write", 0, (syscall_t)zx_channel_write},
    {"zx_clock_get", 0, (syscall_t)zx_clock_get},
    {"zx_cprng_add_entropy", 0, (syscall_t)zx_cprng_add_entropy},
    {"zx_cprng_draw", 0, (syscall_t)zx_cprng_draw},
    {"zx_event_create", 0, (syscall_t)zx_event_create},
    {"zx_eventpair_create", 0, (syscall_t)zx_eventpair_create},
    {"zx_fifo_create", 0, (syscall_t)zx_fifo_create},
    {"zx_fifo_read", 0, (syscall_t)zx_fifo_read},
    {"zx_fifo_write", 0, (syscall_t)zx_fifo_write},
    {"zx_futex_requeue", 0, (syscall_t)zx_futex_requeue},
    {"zx_futex_wait", 0, (syscall_t)zx_futex_wait},
    {"zx_futex_wake", 0, (syscall_t)zx_futex_wake},
    {"zx_futex_wake_handle_close_thread_exit", 0, (syscall_t)zx_futex_wake_handle_close_thread_exit},
    {"zx_handle_close", 0, (syscall_t)zx_handle_close},
    {"zx_handle_close_many", 0, (syscall_t)zx_handle_close_many},
    {"zx_handle_duplicate", 0, (syscall_t)zx_handle_duplicate},
    {"zx_handle_replace", 0, (syscall_t)zx_handle_replace},
    {"zx_job_create", 0, (syscall_t)zx_job_create},
    {"zx_job_set_policy", 0, (syscall_t)zx_job_set_policy},
    {"zx_log_create", 0, (syscall_t)zx_log_create},
    {"zx_log_read", 0, (syscall_t)zx_log_read},
    {"zx_log_write", 0, (syscall_t)zx_log_write},
    {"zx_nanosleep", 0, (syscall_t)zx_nanosleep},
    {"zx_object_get_cookie", 0, (syscall_t)zx_object_get_cookie},
    {"zx_object_get_info$ZX_INFO_CPU_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_HANDLE_BASIC", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_HANDLE_VALID", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_JOB_CHILDREN", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_JOB_PROCESSES", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_KMEM_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_MAPS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_THREADS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_VMOS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_RESOURCE", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_TASK_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_THREAD_EXCEPTION_REPORT", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_THREAD_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_VMAR", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_property", 0, (syscall_t)zx_object_get_property},
    {"zx_object_set_cookie", 0, (syscall_t)zx_object_set_cookie},
    {"zx_object_set_profile", 0, (syscall_t)zx_object_set_profile},
    {"zx_object_set_property", 0, (syscall_t)zx_object_set_property},
    {"zx_object_signal", 0, (syscall_t)zx_object_signal},
    {"zx_object_signal_peer", 0, (syscall_t)zx_object_signal_peer},
    {"zx_object_wait_async", 0, (syscall_t)zx_object_wait_async},
    {"zx_object_wait_many", 0, (syscall_t)zx_object_wait_many},
    {"zx_object_wait_one", 0, (syscall_t)zx_object_wait_one},
    {"zx_port_cancel", 0, (syscall_t)zx_port_cancel},
    {"zx_port_create", 0, (syscall_t)zx_port_create},
    {"zx_port_queue", 0, (syscall_t)zx_port_queue},
    {"zx_port_wait", 0, (syscall_t)zx_port_wait},
    {"zx_process_create", 0, (syscall_t)zx_process_create},
    {"zx_process_exit", 0, (syscall_t)zx_process_exit},
    {"zx_process_read_memory", 0, (syscall_t)zx_process_read_memory},
    {"zx_process_start", 0, (syscall_t)zx_process_start},
    {"zx_socket_accept", 0, (syscall_t)zx_socket_accept},
    {"zx_socket_create", 0, (syscall_t)zx_socket_create},
    {"zx_socket_read", 0, (syscall_t)zx_socket_read},
    {"zx_socket_share", 0, (syscall_t)zx_socket_share},
    {"zx_socket_write", 0, (syscall_t)zx_socket_write},
    {"zx_system_get_num_cpus", 0, (syscall_t)zx_system_get_num_cpus},
    {"zx_system_get_physmem", 0, (syscall_t)zx_system_get_physmem},
    {"zx_system_get_version", 0, (syscall_t)zx_system_get_version},
    {"zx_task_bind_exception_port", 0, (syscall_t)zx_task_bind_exception_port},
    {"zx_task_resume", 0, (syscall_t)zx_task_resume},
    {"zx_thread_create", 0, (syscall_t)zx_thread_create},
    {"zx_thread_exit", 0, (syscall_t)zx_thread_exit},
    {"zx_thread_read_state", 0, (syscall_t)zx_thread_read_state},
    {"zx_thread_read_state$0", 0, (syscall_t)zx_thread_read_state},
    {"zx_thread_start", 0, (syscall_t)zx_thread_start},
    {"zx_thread_write_state", 0, (syscall_t)zx_thread_write_state},
    {"zx_thread_write_state$0", 0, (syscall_t)zx_thread_write_state},
    {"zx_ticks_get", 0, (syscall_t)zx_ticks_get},
    {"zx_ticks_per_second", 0, (syscall_t)zx_ticks_per_second},
    {"zx_timer_cancel", 0, (syscall_t)zx_timer_cancel},
    {"zx_timer_create", 0, (syscall_t)zx_timer_create},
    {"zx_timer_set", 0, (syscall_t)zx_timer_set},
    {"zx_vmar_allocate", 0, (syscall_t)zx_vmar_allocate},
    {"zx_vmar_destroy", 0, (syscall_t)zx_vmar_destroy},
    {"zx_vmar_map", 0, (syscall_t)zx_vmar_map},
    {"zx_vmar_protect", 0, (syscall_t)zx_vmar_protect},
    {"zx_vmar_unmap", 0, (syscall_t)zx_vmar_unmap},
    {"zx_vmar_unmap_handle_close_thread_exit", 0, (syscall_t)zx_vmar_unmap_handle_close_thread_exit},
    {"zx_vmo_clone", 0, (syscall_t)zx_vmo_clone},
    {"zx_vmo_create", 0, (syscall_t)zx_vmo_create},
    {"zx_vmo_get_size", 0, (syscall_t)zx_vmo_get_size},
    {"zx_vmo_op_range$ZX_VMO_OP_CACHE_CLEAN", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_CACHE_CLEAN_INVALIDATE", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_CACHE_INVALIDATE", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_CACHE_SYNC", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_COMMIT", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_DECOMMIT", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_read", 0, (syscall_t)zx_vmo_read},
    {"zx_vmo_set_cache_policy", 0, (syscall_t)zx_vmo_set_cache_policy},
    {"zx_vmo_set_size", 0, (syscall_t)zx_vmo_set_size},
    {"zx_vmo_write", 0, (syscall_t)zx_vmo_write},

};
#endif

#if defined(__aarch64__) || 0
#define GOARCH "arm64"
#define SYZ_REVISION "2586fc26bde1c23368df2388e03cfe8236392119"
#define SYZ_EXECUTOR_USES_FORK_SERVER false
#define SYZ_EXECUTOR_USES_SHMEM false
#define SYZ_PAGE_SIZE 4096
#define SYZ_NUM_PAGES 4096
#define SYZ_DATA_OFFSET 536870912
#define SYZ_SYSCALL_COUNT 162
const call_t syscalls[] = {
    {"chdir", 0, (syscall_t)chdir},
    {"chmod", 0, (syscall_t)chmod},
    {"chown", 0, (syscall_t)chown},
    {"close", 0, (syscall_t)close},
    {"creat", 0, (syscall_t)creat},
    {"dup", 0, (syscall_t)dup},
    {"dup2", 0, (syscall_t)dup2},
    {"dup3", 0, (syscall_t)dup3},
    {"faccessat", 0, (syscall_t)faccessat},
    {"fchmod", 0, (syscall_t)fchmod},
    {"fchmodat", 0, (syscall_t)fchmodat},
    {"fchown", 0, (syscall_t)fchown},
    {"fchownat", 0, (syscall_t)fchownat},
    {"fdatasync", 0, (syscall_t)fdatasync},
    {"fstat", 0, (syscall_t)fstat},
    {"fsync", 0, (syscall_t)fsync},
    {"ftruncate", 0, (syscall_t)ftruncate},
    {"getcwd", 0, (syscall_t)getcwd},
    {"getgid", 0, (syscall_t)getgid},
    {"getpid", 0, (syscall_t)getpid},
    {"getuid", 0, (syscall_t)getuid},
    {"lchown", 0, (syscall_t)lchown},
    {"link", 0, (syscall_t)link},
    {"linkat", 0, (syscall_t)linkat},
    {"lseek", 0, (syscall_t)lseek},
    {"lstat", 0, (syscall_t)lstat},
    {"mkdir", 0, (syscall_t)mkdir},
    {"mkdirat", 0, (syscall_t)mkdirat},
    {"open", 0, (syscall_t)open},
    {"openat", 0, (syscall_t)openat},
    {"pipe", 0, (syscall_t)pipe},
    {"poll", 0, (syscall_t)poll},
    {"ppoll", 0, (syscall_t)ppoll},
    {"preadv", 0, (syscall_t)preadv},
    {"pwritev", 0, (syscall_t)pwritev},
    {"read", 0, (syscall_t)read},
    {"readlink", 0, (syscall_t)readlink},
    {"readlinkat", 0, (syscall_t)readlinkat},
    {"readv", 0, (syscall_t)readv},
    {"rename", 0, (syscall_t)rename},
    {"renameat", 0, (syscall_t)renameat},
    {"rmdir", 0, (syscall_t)rmdir},
    {"select", 0, (syscall_t)select},
    {"stat", 0, (syscall_t)stat},
    {"symlink", 0, (syscall_t)symlink},
    {"symlinkat", 0, (syscall_t)symlinkat},
    {"sync", 0, (syscall_t)sync},
    {"syz_future_time", 0, (syscall_t)syz_future_time},
    {"syz_job_default", 0, (syscall_t)syz_job_default},
    {"syz_mmap", 0, (syscall_t)syz_mmap},
    {"syz_process_self", 0, (syscall_t)syz_process_self},
    {"syz_thread_self", 0, (syscall_t)syz_thread_self},
    {"syz_vmar_root_self", 0, (syscall_t)syz_vmar_root_self},
    {"truncate", 0, (syscall_t)truncate},
    {"unlink", 0, (syscall_t)unlink},
    {"unlinkat", 0, (syscall_t)unlinkat},
    {"utime", 0, (syscall_t)utime},
    {"utimensat", 0, (syscall_t)utimensat},
    {"utimes", 0, (syscall_t)utimes},
    {"write", 0, (syscall_t)write},
    {"writev", 0, (syscall_t)writev},
    {"zx_channel_call", 0, (syscall_t)zx_channel_call},
    {"zx_channel_create", 0, (syscall_t)zx_channel_create},
    {"zx_channel_read", 0, (syscall_t)zx_channel_read},
    {"zx_channel_read_etc", 0, (syscall_t)zx_channel_read_etc},
    {"zx_channel_write", 0, (syscall_t)zx_channel_write},
    {"zx_clock_get", 0, (syscall_t)zx_clock_get},
    {"zx_cprng_add_entropy", 0, (syscall_t)zx_cprng_add_entropy},
    {"zx_cprng_draw", 0, (syscall_t)zx_cprng_draw},
    {"zx_event_create", 0, (syscall_t)zx_event_create},
    {"zx_eventpair_create", 0, (syscall_t)zx_eventpair_create},
    {"zx_fifo_create", 0, (syscall_t)zx_fifo_create},
    {"zx_fifo_read", 0, (syscall_t)zx_fifo_read},
    {"zx_fifo_write", 0, (syscall_t)zx_fifo_write},
    {"zx_futex_requeue", 0, (syscall_t)zx_futex_requeue},
    {"zx_futex_wait", 0, (syscall_t)zx_futex_wait},
    {"zx_futex_wake", 0, (syscall_t)zx_futex_wake},
    {"zx_futex_wake_handle_close_thread_exit", 0, (syscall_t)zx_futex_wake_handle_close_thread_exit},
    {"zx_handle_close", 0, (syscall_t)zx_handle_close},
    {"zx_handle_close_many", 0, (syscall_t)zx_handle_close_many},
    {"zx_handle_duplicate", 0, (syscall_t)zx_handle_duplicate},
    {"zx_handle_replace", 0, (syscall_t)zx_handle_replace},
    {"zx_job_create", 0, (syscall_t)zx_job_create},
    {"zx_job_set_policy", 0, (syscall_t)zx_job_set_policy},
    {"zx_log_create", 0, (syscall_t)zx_log_create},
    {"zx_log_read", 0, (syscall_t)zx_log_read},
    {"zx_log_write", 0, (syscall_t)zx_log_write},
    {"zx_nanosleep", 0, (syscall_t)zx_nanosleep},
    {"zx_object_get_cookie", 0, (syscall_t)zx_object_get_cookie},
    {"zx_object_get_info$ZX_INFO_CPU_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_HANDLE_BASIC", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_HANDLE_VALID", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_JOB_CHILDREN", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_JOB_PROCESSES", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_KMEM_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_MAPS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_THREADS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_PROCESS_VMOS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_RESOURCE", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_TASK_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_THREAD_EXCEPTION_REPORT", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_THREAD_STATS", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_info$ZX_INFO_VMAR", 0, (syscall_t)zx_object_get_info},
    {"zx_object_get_property", 0, (syscall_t)zx_object_get_property},
    {"zx_object_set_cookie", 0, (syscall_t)zx_object_set_cookie},
    {"zx_object_set_profile", 0, (syscall_t)zx_object_set_profile},
    {"zx_object_set_property", 0, (syscall_t)zx_object_set_property},
    {"zx_object_signal", 0, (syscall_t)zx_object_signal},
    {"zx_object_signal_peer", 0, (syscall_t)zx_object_signal_peer},
    {"zx_object_wait_async", 0, (syscall_t)zx_object_wait_async},
    {"zx_object_wait_many", 0, (syscall_t)zx_object_wait_many},
    {"zx_object_wait_one", 0, (syscall_t)zx_object_wait_one},
    {"zx_port_cancel", 0, (syscall_t)zx_port_cancel},
    {"zx_port_create", 0, (syscall_t)zx_port_create},
    {"zx_port_queue", 0, (syscall_t)zx_port_queue},
    {"zx_port_wait", 0, (syscall_t)zx_port_wait},
    {"zx_process_create", 0, (syscall_t)zx_process_create},
    {"zx_process_exit", 0, (syscall_t)zx_process_exit},
    {"zx_process_read_memory", 0, (syscall_t)zx_process_read_memory},
    {"zx_process_start", 0, (syscall_t)zx_process_start},
    {"zx_socket_accept", 0, (syscall_t)zx_socket_accept},
    {"zx_socket_create", 0, (syscall_t)zx_socket_create},
    {"zx_socket_read", 0, (syscall_t)zx_socket_read},
    {"zx_socket_share", 0, (syscall_t)zx_socket_share},
    {"zx_socket_write", 0, (syscall_t)zx_socket_write},
    {"zx_system_get_num_cpus", 0, (syscall_t)zx_system_get_num_cpus},
    {"zx_system_get_physmem", 0, (syscall_t)zx_system_get_physmem},
    {"zx_system_get_version", 0, (syscall_t)zx_system_get_version},
    {"zx_task_bind_exception_port", 0, (syscall_t)zx_task_bind_exception_port},
    {"zx_task_resume", 0, (syscall_t)zx_task_resume},
    {"zx_thread_create", 0, (syscall_t)zx_thread_create},
    {"zx_thread_exit", 0, (syscall_t)zx_thread_exit},
    {"zx_thread_read_state", 0, (syscall_t)zx_thread_read_state},
    {"zx_thread_read_state$0", 0, (syscall_t)zx_thread_read_state},
    {"zx_thread_start", 0, (syscall_t)zx_thread_start},
    {"zx_thread_write_state", 0, (syscall_t)zx_thread_write_state},
    {"zx_thread_write_state$0", 0, (syscall_t)zx_thread_write_state},
    {"zx_ticks_get", 0, (syscall_t)zx_ticks_get},
    {"zx_ticks_per_second", 0, (syscall_t)zx_ticks_per_second},
    {"zx_timer_cancel", 0, (syscall_t)zx_timer_cancel},
    {"zx_timer_create", 0, (syscall_t)zx_timer_create},
    {"zx_timer_set", 0, (syscall_t)zx_timer_set},
    {"zx_vmar_allocate", 0, (syscall_t)zx_vmar_allocate},
    {"zx_vmar_destroy", 0, (syscall_t)zx_vmar_destroy},
    {"zx_vmar_map", 0, (syscall_t)zx_vmar_map},
    {"zx_vmar_protect", 0, (syscall_t)zx_vmar_protect},
    {"zx_vmar_unmap", 0, (syscall_t)zx_vmar_unmap},
    {"zx_vmar_unmap_handle_close_thread_exit", 0, (syscall_t)zx_vmar_unmap_handle_close_thread_exit},
    {"zx_vmo_clone", 0, (syscall_t)zx_vmo_clone},
    {"zx_vmo_create", 0, (syscall_t)zx_vmo_create},
    {"zx_vmo_get_size", 0, (syscall_t)zx_vmo_get_size},
    {"zx_vmo_op_range$ZX_VMO_OP_CACHE_CLEAN", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_CACHE_CLEAN_INVALIDATE", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_CACHE_INVALIDATE", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_CACHE_SYNC", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_COMMIT", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_op_range$ZX_VMO_OP_DECOMMIT", 0, (syscall_t)zx_vmo_op_range},
    {"zx_vmo_read", 0, (syscall_t)zx_vmo_read},
    {"zx_vmo_set_cache_policy", 0, (syscall_t)zx_vmo_set_cache_policy},
    {"zx_vmo_set_size", 0, (syscall_t)zx_vmo_set_size},
    {"zx_vmo_write", 0, (syscall_t)zx_vmo_write},

};
#endif
