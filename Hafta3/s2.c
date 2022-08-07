#include <stdio.h>

int f(int *dizi, int adet){

	int sayac;

	if(adet=0)
		return;
	else if(*dizi%2=1){
		adet ++;
		f(dizi++,adet-1);
	}
	else{
		f(dizi++,adet-1);
	}
}
