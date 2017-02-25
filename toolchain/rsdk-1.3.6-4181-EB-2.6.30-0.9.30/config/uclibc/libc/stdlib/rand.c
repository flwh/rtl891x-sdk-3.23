/* vi: set sw=4 ts=4: */
/*
 * rand for uClibc
 * Copyright (C) 2000-2006 by Erik Andersen <andersen@uclibc.org>
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#include <stdlib.h>

libc_hidden_proto(random)

int rand (void)
{
	return((int)random());
}

