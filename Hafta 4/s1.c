#include <stdio.h>
#include <stdlib.h>

int enbuyuk(int *, int);

int main(){

	printf("eleman sayısı: ");

	int adet, *point, i=0;

	scanf("%d",&adet);

	point = calloc(adet,sizeof(int));

	while(i!=adet){

		printf("%d. eleman: ", i+1);

		scanf("%d", point+i);

		i++;

	}

	printf("en buyuk eleman = %d\n", enbuyuk(point,adet));

}

int enbuyuk(int *p, int adet){

	int i=1, big=*p;

	while(i!=adet){

		if(*(p+i)>big)
			big = *(p+i);

		i++;
	}

	return big;
}
