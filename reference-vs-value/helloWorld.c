/*********************************************** 

  *   Code File helloWorld.c                   *

  *  (c) 2016                                  *

  *                                            *

  *    hello world                             *

  **********************************************/ 

#include <stdio.h>


struct MyArrayWrapper
{
	int myArray[5];
};
  
void doSth(struct MyArrayWrapper a ){
	a.myArray[0] = 1;
}

void doSthWithRef(struct MyArrayWrapper* a)
{
	a->myArray[0] = 2;
}

int main( int argc, const char* argv[] ) { 

	struct MyArrayWrapper wrap;
	wrap.myArray[0] = 0;

	doSth(wrap);
	printf("FirstElementOfArray: %i\n", wrap.myArray[0]);
	
	doSthWithRef(&wrap);
	printf("FirstElementOfArray: %i\n", wrap.myArray[0]);
	

	return 0;
}

