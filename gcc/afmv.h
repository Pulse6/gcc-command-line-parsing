/* Copyright (C) 2003-2024 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifndef GCC_AFMV_H
#define GCC_AFMV_H

/* Storage global variable for AFMV*/

#define AFMV_MAX_ARRAY_SIZE 100

extern unsigned int afmv_cnt;
extern char* afmv_targets[AFMV_MAX_ARRAY_SIZE];

#endif /* GCC_AFMV_H */
