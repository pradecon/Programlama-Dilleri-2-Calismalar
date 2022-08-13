#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *isim, *soyisim;

	isim = (char *)malloc(6*sizeof(char));

	strcpy(isim,"furkan");

	soyisim = (char *)malloc(10*sizeof(char));

	strcpy(soyisim,"cankaya");

	printf("%s %s\n", isim, soyisim);

}
