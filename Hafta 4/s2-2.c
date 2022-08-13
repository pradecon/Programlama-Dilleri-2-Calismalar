#include <stdio.h>
#include <stdlib.h>

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

	for(i=0;i!=adet;i++){

		printf("%d ",*(point+i));

	}

	int ek;

	printf("\n\n ek eleman sayisi:");

	scanf("%d", &ek);

	point = (int *)realloc(point,(adet+ek)*sizeof(int));

	i=0;

	while(i!=ek){

                printf("%d. eleman: ", adet+i+1);

                scanf("%d", point+i+adet);

                i++;
	}
	
	printf("\n");

	for(i=0;i!=adet+ek;i++){

                printf("%d ",*(point+i));

        }
}
