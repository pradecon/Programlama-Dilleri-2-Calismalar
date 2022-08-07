#include <stdio.h>

int fib(int n)
{
 if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
int main(){

	printf("kacinci fib sayisini bulmak istiyorsunuz: ");

	int sira;

	scanf("%d",&sira);

	printf("\nbulunmak istenen fibonacci sayisi: %d\n\n",fib(sira));
}
