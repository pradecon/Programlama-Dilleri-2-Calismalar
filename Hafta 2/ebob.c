#include <stdio.h>
#include <stdlib.h>
int ebob(int a, int b, int n)
{
	if(a%n==0 && b%n==0)
		return n;
	else
		return ebob(a,b,n-1);
	return 1;
	}

	
	int main() {
			
		int n1, n2, sonuc;
		
		printf("sayi 1 : ");
		scanf("%d",&n1);
		
		printf("\nsayi 2 : ");
		scanf("%d",&n2);
		
		sonuc = ebob(n1, n2, n1<n2?n1:n2);
		printf("\nebob(%d,%d) = %d\n",n1 ,n2, sonuc);
return 0;
 }
