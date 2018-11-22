#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[100] = "Programming course";
	char dst[100];
	int i;
	int count=0;
	
	for (i=0; src[i] != NULL ; i++) {
		dst[i] = src[i];
		count++;
	}
	dst[i] = NULL;
	//strcpy(dst, src); ¿Í °°´Ù. 
	
	printf("%s(%d)\n", dst, count);
	printf("already included.\n");
	printf("strlen: %i", strlen(dst));
	
	
	return 0;
}
