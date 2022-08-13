#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char *kelime1, *kelime2;

	printf("kelime1: ");

	scanf("%s",kelime1);

	printf("\nkelime2: ");

        scanf("%s",kelime2);

	if(strcmp(kelime1,kelime2)==0)
		printf("\naynı kelimeler\n\n");

	else
		printf("\nfarklı kelimeler\n\n");
}
