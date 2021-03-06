#include "world.h"


/**************************************************************************/
/* GLOBAL **************      FindLastImport       ************************/
/**************************************************************************/
/* PURPOSE: RETURN THE LAST IMPORT TO NODE n.                             */
/**************************************************************************/

PEDGE FindLastImport( n )
PNODE n;
{
  register PEDGE i;

  for ( i = n->imp; i != NULL; i = i->isucc )
    if ( i->isucc == NULL )
      break;

  return( i );
}

/* $Log: FindLastImpor.c,v $co: warning: `/* $Log' is obsolescent; use ` * $Log'.

 * Revision 1.1.1.1  2000/12/31 10:48:03  patmiller
 * LLNL distribution with Dave Raymond pthread hacks
 * (otherwise looks remarkably like it did 4 years
 * ago)
 *
 * Pat
 *
 * Revision 1.1  1993/04/16  19:00:14  miller
 * Name shortening to keep the archiver from truncating names in Backend/Library
 * Since some names were changed, other files were affected.  All names in the
 * library now start with no more than 13 (unique) characters.
 *
 * Revision 1.1  1993/01/21  23:28:34  miller
 * Initial version of the IFX library.  It replaces the if[12]build.c
 * read.c timer.c util.c and write.c and if[12].h files from the
 * backend phases.
 * */
