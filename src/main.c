/*
** main file for this project.
*/

#include "base.h"

static char *mesg = "Hello, World!";

static int printMesg(
   void
   )
{
    printf ( "%s\n", mesg );
    printf ( "Turn off syntax expansion." );
    return 0;
}

int main( 
   int argc,
   char **argv
   )
{
    (void) printMesg();
    return 0;
}
