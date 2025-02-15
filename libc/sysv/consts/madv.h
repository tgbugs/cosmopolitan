#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_MADV_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_MADV_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const unsigned MADV_DODUMP;
extern const unsigned MADV_DOFORK;
extern const unsigned MADV_DONTDUMP;
extern const unsigned MADV_DONTFORK;
extern const unsigned MADV_DONTNEED;
extern const unsigned MADV_FREE;
extern const unsigned MADV_HUGEPAGE;
extern const unsigned MADV_HWPOISON;
extern const unsigned MADV_MERGEABLE;
extern const unsigned MADV_NOHUGEPAGE;
extern const unsigned MADV_NORMAL;
extern const unsigned MADV_RANDOM;
extern const unsigned MADV_REMOVE;
extern const unsigned MADV_SEQUENTIAL;
extern const unsigned MADV_UNMERGEABLE;
extern const unsigned MADV_WILLNEED;

#define MADV_NORMAL     0
#define MADV_RANDOM     1
#define MADV_SEQUENTIAL 2
#define MADV_WILLNEED   3

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_MADV_H_ */
