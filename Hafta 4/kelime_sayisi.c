#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *metin=(char *)malloc(100*sizeof(char));;
	printf("cümle: ");
	scanf("%[^\n]",metin);
	int i,adet=1;
	for(i=0;*(metin+i)!='\0';i++){
		if(*(metin+i)==' ')
			adet++;
	}
	printf("kelime sayisi= %d\n",adet);
	return 0;
}
