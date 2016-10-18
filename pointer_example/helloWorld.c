/*********************************************** 

  *   Code File helloWorld.c                                              *

  *  (c) 2016  *

  *                                                                                      *

  *    Just to illustrate the functionality of C                        *

  **********************************************/ 

/* include all used libraries */
#include <stdio.h>

/* pre-declare functions*/



/* function sector*/

/* <optional> start point of program*/ 
  int main( int argc, const char* argv[] ) { 
 /* function body*/
  	char c = 'a';
    char* cp = &c;
    printf("value of variable: %c\n", c);
    printf("value of pointer: %c\n", *cp);
    printf("Address of c: %x \n", cp);
    //------------------------------------
    c = 'b';
    printf("value of pointer: %c\n", *cp);
    printf("Address of c: %x \n", cp);
    //------------------------------------

    char my_string[] = "1234567890";

    cp = &my_string[5];
    printf("value of pointer: %c\n", *cp);
    printf("Address of c: %x \n", cp);

    printf("value of pointer: %x\n", *(cp + 1));
    printf("Address of c: %x \n", cp + 1);

    return 0; /* return OK*/ 
  }
