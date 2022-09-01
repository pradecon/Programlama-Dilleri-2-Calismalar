#include <stdio.h>

int main()
{
	double i=1;
	while(i<100){
		printf("%.0f- %f\n",i, i*(3*i-1)/2);
		i++;
	}
	return 0;
}

