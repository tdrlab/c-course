/*********************************************** 

  *   Code File helloWorld.c                   *

  *  (c) 2016                                  *

  *                                            *

  *    hello world                             *

  **********************************************/ 


#include <stdio.h>
#include <stdlib.h>


int write_to_file(const char* path, const char* text, long unsigned int length);

int main( int argc, const char* argv[] ) { 
	char *buffer = NULL;
	int read;
	long unsigned int len;
	read = getline(&buffer, &len, stdin);
	if (-1 != read)
	    write_to_file("output.txt", buffer, read);
	else
	    printf("No line read...\n");

	printf("Size read: %d\n Len: %lu\n", read, len);
	free(buffer);

	return 0; /* return OK*/ 
}

int write_to_file(const char* path, const char* text, long unsigned int length){
	FILE *fp = fopen(path, "w");
	if (fp == NULL)
	{
	    printf("Error opening file!\n");
	    exit(-1);
	}

	//fprintf(fp, "The Text entered was: %s", text);
	fwrite(text, sizeof(char), length, fp);
	fclose(fp);
}

