#include "libc/nt/codegen.h"
.imp	kernel32,__imp_DebugActiveProcess,DebugActiveProcess,0

	.text.windows
        .ftrace1
DebugActiveProcess:
        .ftrace2
#ifdef __x86_64__
	push	%rbp
	mov	%rsp,%rbp
	mov	%rdi,%rcx
	sub	$32,%rsp
	call	*__imp_DebugActiveProcess(%rip)
	leave
#elif defined(__aarch64__)
	mov	x0,#0
#endif
	ret
	.endfn	DebugActiveProcess,globl
	.previous
