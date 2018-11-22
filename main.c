#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char input[100];
	char origin[100];
	char find[100];
	
	FILE *fp1;
	
	printf("original file: ");
	scanf("%s", origin);
	printf("word to find: ");
	scanf("%s", find);
	
	fp1 = fopen(origin, "r");
	
	while ( (fgets(input, 100, fp1)) != NULL )
	{
		if(strncmp(input, find, strlen(find)) == 0)
		{
			printf("find a word %s\n", input);
		}
	}
	
	printf("Search done!\n");
	
	fclose(fp1);
	
	return 0;
}
