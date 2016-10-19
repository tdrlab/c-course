/*********************************************** 

  *   Code File helloWorld.c                   *

  *  (c) 2016                                  *

  *                                            *

  *    hello world                             *

  **********************************************/ 

#include <stdio.h>


int main( int argc, const char* argv[] ) { 

  char t[3][3] = {
                {'1','2','3'},
                {'4','5','6'},
                {'7','8','9'}
  };
  printf("value of t[0][0]: %c\n", t[0][0]);
  printf("value of t[0]: %c\n", *t[0]);
  printf("value of t: %c\n", **t);
  printf("value of t: %c\n", *t);
return 0; /* return OK*/ 
}
