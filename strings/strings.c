/*********************************************** 

  *   Code File helloWorld.c                   *

  *  (c) 2016                                  *

  *                                            *

  *    hello world                             *

  **********************************************/ 


#include <stdio.h>
#include <string.h>


int main( int argc, const char* argv[] ) { 

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

 