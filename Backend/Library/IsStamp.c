#include "world.h"


/**************************************************************************/
/* GLOBAL **************          IsStamp          ************************/
/**************************************************************************/
/* PURPOSE: RETURNS TRUE IF STAMP stamp IS DEFINED, ELSE FALSE.           */
/**************************************************************************/

int  IsStamp( stamp )
char stamp;
{
  if ( stamps[ (int)stamp ] == NULL )
    return( FALSE );

  return( TRUE );
}

/* $Log: IsStamp.c,v $co: warning: `/* $Log' is obsolescent; use ` * $Log'.

 * Revision 1.1.1.1  2000/12/31 10:48:12  patmiller
 * LLNL distribution with Dave Raymond pthread hacks
 * (otherwise looks remarkably like it did 4 years
 * ago)
 *
 * Pat
 *
 * Revision 1.2  1994/04/15  15:51:49  denton
 * Added config.h to centralize machine specific header files.
 * Fixed gcc warings.
 *
 * Revision 1.1  1993/01/21  23:29:16  miller
 * Initial version of the IFX library.  It replaces the if[12]build.c
 * read.c timer.c util.c and write.c and if[12].h files from the
 * backend phases.
 * */
