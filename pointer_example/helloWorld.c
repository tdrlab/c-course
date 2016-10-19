/*********************************************** 

  *   Code File helloWorld.c                                              *

  *  (c) 2016  *

  *                                                                                      *

  *    Just to illustrate the functionality of C                        *

  **********************************************/ 


#include <stdio.h>


int main( int argc, const char* argv[] ) { 
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

  char my_string[] = "abcdefghijklmno";

  cp = &my_string[5];  // take the address of my_string[5] and save it in cp
  printf("value of pointer: %c\n", *cp);
  printf("Address of c: %x \n", cp);

  printf("value of pointer: %c\n", *(cp + 1));
  printf("Address of c: %x \n", cp + 1);

  return 0; /* return OK*/ 
}
