#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char input;
	char origin[100];
	char copy[100];
	int i=0;
	
	FILE *fp1;
	FILE *fp2;
	
	printf("original file: ");
	scanf("%s", origin);
	printf("copy file: ");
	scanf("%s", copy);
	
	fp1 = fopen(origin, "r");
	fp2 = fopen(copy, "w");
	
	while ( (input = fgetc(fp1)) != EOF )
	{
		fputc(input, fp2);
		i++;
	}
	
	printf("Copy succeed~(%d bytes)\n", i);
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
