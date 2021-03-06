#include "world.h"


/**************************************************************************/
/* GLOBAL **************      MyBBlockAlloc        ************************/
/**************************************************************************/
/* PURPOSE: RETURN A POINTER TO A BBLOCK WHICH CAN BECOME EITHER A NODE  */
/*          OR EDGE OR INFO.  IT MAY NEVER BE FREED!!!!                   */
/**************************************************************************/

#define MAX_BBLOCKS 5000

PBBLOCK pool;
int     pidx = MAX_BBLOCKS+100;

PBBLOCK MyBBlockAlloc()
{
  if ( pidx >= MAX_BBLOCKS ) {
    pool = (PBBLOCK) MyAlloc( (int)sizeof(BBLOCK)*MAX_BBLOCKS );
    pidx = 0;
  }

  return( &(pool[pidx++]) );
}

/* $Log: MyBBlockAlloc.c,v $co: warning: `/* $Log' is obsolescent; use ` * $Log'.

 * Revision 1.1.1.1  2000/12/31 10:48:16  patmiller
 * LLNL distribution with Dave Raymond pthread hacks
 * (otherwise looks remarkably like it did 4 years
 * ago)
 *
 * Pat
 *
 * Revision 1.1  1993/01/21  23:29:49  miller
 * Initial version of the IFX library.  It replaces the if[12]build.c
 * read.c timer.c util.c and write.c and if[12].h files from the
 * backend phases.
 * */
