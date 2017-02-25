/* vi: set sw=4 ts=4: */
/*
 * splice() for uClibc
 *
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#include <sys/syscall.h>
#include <fcntl.h>

libc_hidden_proto(splice)

#ifdef __NR_splice
_syscall6(ssize_t, splice, int, __fdin, __off64_t *, __offin, int, __fdout,
	__off64_t *, __offout, size_t, __len, unsigned int, __flags)
#else
ssize_t splice(int __fdin, __off64_t *__offin, int __fdout,
	__off64_t *__offout, size_t __len, unsigned int __flags)
{
	__set_errno(ENOSYS);
	return -1;
}
#endif

libc_hidden_def(splice)

