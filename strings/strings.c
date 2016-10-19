/*********************************************** 

  *   Code File helloWorld.c                                              *

  *  (c) 2016  *

  *                                                                                      *

  *    Just to illustrate the functionality of C                        *

  **********************************************/ 

/* include all used libraries */
#include <stdio.h>
#include <string.h>

/* pre-declare functions*/



/* function sector*/

/* <optional> start point of program*/ 
  int main( int argc, const char* argv[] ) { 
 /* function body*/

	char arr[40] = "My Name, array";
	char* ptr = "My Name, Pointer";
	char* date = ", 01.01.1970";
	printf("comparision: %i\n", strcmp(arr, ptr));
	arr[2] = ',';
	// DOES NOT WORK *(ptr + 2) = ','; // writes to .TEXT

	strcpy(&arr[14], date);
	printf("%s\n", arr);
	printf("%s\n", ptr);

	return 0;
  }

 