/*********************************************** 

  *   Code File helloWorld.c                                              *

  *  (c) 2016  *

  *                                                                                      *

  *    Just to illustrate the functionality of C                        *

  **********************************************/ 

/* include all used libraries */
#include <stdio.h>

/* pre-declare functions*/


struct MyArrayWrapper
{
	int myArray[5];
};
/* function sector*/

/* <optional> start point of program*/ 
  
  void doSth(struct MyArrayWrapper a ){
  	a.myArray[0] = 1;
  }
  
  void doSthWithRef(struct MyArrayWrapper* a)
  {
  	a->myArray[0] = 2;
  }

  int main( int argc, const char* argv[] ) { 
 /* function body*/
  	struct MyArrayWrapper wrap;
  	wrap.myArray[0] = 0;

  	doSth(wrap);
  	printf("FirstElementOfArray: %i\n", wrap.myArray[0]);
  	
  	doSthWithRef(&wrap);
  	printf("FirstElementOfArray: %i\n", wrap.myArray[0]);
  	

  	return 0;
  }

