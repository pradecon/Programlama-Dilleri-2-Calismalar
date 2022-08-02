#include <stdio.h>

int big(int dizi[], int i){

	int x;

	if (i == 1)
		return dizi[0];
	else
		x = big(dizi, i - 1);
	if (x > dizi[i - 1])
		return x;
	else
		return dizi[i - 1];
}
int main(){
	int arr[] = { 12, 10, 300, 50, 100 };
	printf("en büyük %d ", big(arr, 5));

	return 0;
}

