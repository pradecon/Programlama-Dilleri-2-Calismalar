#include <stdio.h>

float hesapla();

int main()
{
	hesapla();
	return 0;
}

float hesapla()
{
	float not[100], ortalama = 0;
	
	int i = 0;
	
	printf("not girmeyi -1 değerini girerek bitirebilirsiniz\n\n");
	
	do
	{
		printf("not : ");
		scanf("%f",&not[i]);
		
		ortalama = ortalama + not[i];
		
		i++;
		
		printf("\n");
		
	}while(not[i-1]!=-1);
	
	printf("\nOratalma = %.2f", (ortalama+1)/(i-1));
}

