#include "world.h"


/**************************************************************************/
/* GLOBAL **************        ReadLineId         ************************/
/**************************************************************************/
/* PURPOSE: READ AND RETURN A LINE IDENTIFIER.  IT MAY BE PROCEEDED BY    */
/*          ONE OR MORE EOLN, TAB, OR BLANK CHARACTERS.  WHEN DONE, token */
/*          WILL CONTAIN THE CHARACTER FOLLOWING THE RETURNED IDENTIFIER. */
/**************************************************************************/

int ReadLineId() 
{ 
  register int id;

  while ( IsWhite( token )  ) {
    if ( IsEoln( token ) ) 
      line++; 

    NextToken;
  }

  if ( (id = token) != EOF )
    NextToken;

  return( id ); 
}

/* $Log: ReadLineId.c,v $co: warning: `/* $Log' is obsolescent; use ` * $Log'.

 * Revision 1.1.1.1  2000/12/31 10:48:19  patmiller
 * LLNL distribution with Dave Raymond pthread hacks
 * (otherwise looks remarkably like it did 4 years
 * ago)
 *
 * Pat
 *
 * Revision 1.1  1993/01/21  23:30:12  miller
 * Initial version of the IFX library.  It replaces the if[12]build.c
 * read.c timer.c util.c and write.c and if[12].h files from the
 * backend phases.
 * */
