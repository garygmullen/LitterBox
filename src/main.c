/*
** main file for this project.
*/

#include "base.h"

static int printMesg(
   void
   )
{
    printf ( "Hello, World!\n" );
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
