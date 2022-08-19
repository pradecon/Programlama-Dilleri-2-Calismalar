#include <stdio.h>
#include <stdlib.h>

void harf_adetleri(char *metin){
	
	static char vs='0';
	
	int i,adet=0;
	
	for(i=0;*(metin+i)!='\0';i++){
		if(*(metin+i)==vs){
			//printf("metin= %c, vs= %c",*metin,vs);
			adet++;
		}
	}
	if(adet!=0){
		printf("%d adet \"%c\", ",adet,vs);
	}
	else;
	if(vs<'z'+1){
		vs++;
		harf_adetleri(metin);
	}
	else;
}
int main()
{
	char *metin=(char *)malloc(100*sizeof(char));
	
	printf("metni giriniz: ");
	
	scanf("%[^\n]",metin);
	
	harf_adetleri(metin);
	return 0;
}

