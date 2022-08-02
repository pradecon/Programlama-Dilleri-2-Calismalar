#include <stdio.h>

int sum(int);

int main()
{
	printf("doğal sayıyı girin: ");
	
	int natural;
	
	scanf("%d", &natural);
	
	printf("\ntoplam = %d", sum(natural));
	
	return 0;
}

int sum(int natural){
	
	if(natural == 0)
		return natural;
	
	return natural + sum(natural-1);
	
}
