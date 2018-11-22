#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string[100];
	
	FILE *fp;
	fp = fopen("sample.txt", "w");
	
	printf("Input a word: ");
	scanf("%s", string);
	fprintf(fp, "%s\n", string);
	
	printf("Input a word: ");
	scanf("%s", string);
	fprintf(fp, "%s\n", string);
	
	printf("Input a word: ");
	scanf("%s", string);
	fprintf(fp, "%s\n", string);
	
	fclose(fp);
	

	
	return 0;
}
