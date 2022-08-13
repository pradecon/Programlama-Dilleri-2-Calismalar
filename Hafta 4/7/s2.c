#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char *cumle, *kelime, *temp;
	
	cumle = (char*)malloc(100*sizeof(char));

	cumle = "merhaba dunya";
	
	kelime = (char *)malloc(15*sizeof(char));

	kelime = "dunya";

	int i=0,b=0;

	while(*(cumle+i)!='\0'){

	while(*(cumle+i)!=' '){
		*(temp+b)=*cumle+i;
		i++; b++;
	}
	b=0;
	if(strcmp(temp,kelime)==0){
		printf("kelime %ld indisinde bulundu",temp-cumle);
		break;
	}

	}
}
