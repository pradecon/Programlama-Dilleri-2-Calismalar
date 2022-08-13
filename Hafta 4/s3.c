#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char *name;

	name = (char *)malloc(6*sizeof(char));

	strcpy(name,"furkan");

	printf("%s\n",name);

	name =(char *)realloc(name,17*sizeof(char));

	strcpy(name,"furkan cankaya");

	printf("%s\n",name);
}

