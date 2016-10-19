/*********************************************** 

  *   Code File helloWorld.c                   *

  *  (c) 2016                                  *

  *                                            *

  *    hello world                             *

  **********************************************/ 

/* include all used libraries */
#include <stdio.h>

/* pre-declare functions*/



/* function sector*/

/* <optional> start point of program*/ 
int main( int argc, const char* argv[] ) { 
  int t[5] = {1,2,3,4,5};

  for (int i=0; i<6;i++){
    printf("i=%d\n",t[i]);
  }

  for (int i=0; i<6;i++){  // super bad!
    t[i] = i;
  }
  t[6] = 0;
  return 0;
}
