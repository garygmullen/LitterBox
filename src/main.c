/*
** main file for this project.
*/

#include "base.h"

static char *mesg = "Hello, World!";

static int dummyFunc(
   void
   )
{
    return rand();
}

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
    printf("Rand %d\n", dummyFunc() *2 );
    /* return the value from printMesg()*/
    return printMesg();
}
