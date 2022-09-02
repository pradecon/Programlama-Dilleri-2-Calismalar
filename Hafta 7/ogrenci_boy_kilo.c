#include <stdio.h>

enum info {weight = 1, lenght = 2}student;

void input(float c[10][2]);

float avarage_weight(float a[10][2]);

float avarage_lenght(float a[10][2]);

int main()
{
	float class[10][2];
	
	input(class);
	
	printf("Ortalama kilo: %.2f; Ortalama boy: %.2f",avarage_weight(class),avarage_lenght(class));
	
	return 0;
}

void input(float c[10][2]){
	int i;
	for(i=0;i<10;i++){
		printf("Öğrenci %d\nKilo: ",i+1); student=weight;
		scanf("%f",&c[i][student]);
		printf("Boy: "); student=lenght;
		scanf("%f",&c[i][student]);
	}
}

float avarage_weight(float a[10][2]){
	int i; student=weight; float resault=0;
	for(i=0;i<10;i++){
		resault=resault + a[i][student];
	}
	return resault/10;
}

float avarage_lenght(float a[10][2]){
		int i; student=lenght; float resault=0;
	for(i=0;i<10;i++){
		resault=resault + a[i][student];
	}
	return resault/10;
}
