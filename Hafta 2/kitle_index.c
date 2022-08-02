#include <stdio.h>

float kitleIndex(){
	
	float kilo, boy;
	
	printf("kilo: ");
	scanf("%f",&kilo);
	
	printf("\nboy: ");
	scanf("%f",&boy);
	
	return kilo/(boy*boy);
}
	
int main()
{
	float index;
	index = kitleIndex();
	printf("\n");
	if(index>=0&&index<=18)
		printf("Zayıf");
	if(index>=19&&index<=25)
		printf("Normal");
	if(index>=26&&index<=30)
		printf("Kilolu");
	if(index>30)
		printf("Obez");
	printf("\n\nindex: %f\n", index);
	
	return 0;
}

