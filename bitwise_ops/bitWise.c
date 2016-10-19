/*********************************************** 

  *   Code File helloWorld.c                                              *

  *  (c) 2016  *

  *                                                                                      *

  *    Just to illustrate the functionality of C                        *



*/
#include <stdio.h>
int print_bits();


/* function sector*/

/* <optional> start point of program*/ 
  
int main( int argc, const char* argv[] ) { 
	/* function body*/ 
	print_bits();
	return 1; 
}

int print_bits(){
	int i = 0;
	float f = 5.6;
	printf("i: %d, 0x%x\n", i,i);
	i |= 1 << 2;
	printf("i: 0x%x\n",i);
	i = f;
	printf("i: %d\n",i);
	return 1;
}
