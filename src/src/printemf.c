/*
 * Edit the contents of an EMF file.
 * Copyright (C) 2002, 2003 lignum Computing, Inc. <libemf@lignumcomputing.com>
 * $Id: printemf.c,v 1.2 2003/01/14 03:47:09 allen Exp $
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#include <libEMF/emf.h>

const char* USAGE = "usage: %s filename\n";

int main ( int argc, char* argv[] )
{
  HENHMETAFILE metafile;

  if ( argc != 2 ) {
    fprintf( stderr, USAGE, argv[0] );
    return 1;
  }

  metafile = GetEnhMetaFile( argv[1] );

  if ( metafile != 0 ) {
    EditEnhMetaFile( metafile );

    DeleteEnhMetaFile( metafile );
  }

  return 0;
}
