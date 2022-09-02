#include <stdio.h>
#include <stdlib.h>

void create(int **,int);

void print(int **,int);

void sum(int**,int**,int);

int main()
{
	int **a,**b,x;
	
	printf("size of matris: ");
	int s;
	
	scanf("%d",&s);
	
	a=(int **)malloc(s*sizeof(int *));
	for(x=0;x<s;x++){
		a[x]=(int *)malloc(s*sizeof(int));
	}
	
	b=(int **)malloc(s*sizeof(int *));
	
	for(x=0;x<s;x++){
		b[x]=(int *)malloc(s*sizeof(int));
	}
	
	
	
	
	
	create(a,s);
	
	printf("create 1 done\n");
	
	create(b,s);
	
	print(a,s);
	printf("\n");
	
	print(b,s);
	
	sum(a,b,s);
	
	return 0;
}

void create(int **c,int s){
	
	int x,y;
	
	for(x=1;x<=s;x++){
		for(y=1;y<=s;y++){
			printf("x((%d)y(%d): ",x,y);
			scanf("%d",*(c+x-1)+y-1);
		}
	}
}

void print(int ** p,int s){
	int x,y;
	
	for(x=0;x<s;x++){
		for(y=0;y<s;y++){
			//printf("test ");
			printf("%d ",p[x][y]);
		}
		printf("\n");
	}
}

void sum(int **a,int **b,int s){
	int x,y,**sum;
	
	sum=(int **)malloc(s*sizeof(int *));
	for(x=0;x<s;x++){
		sum[x]=(int *)malloc(s*sizeof(int));
	}
	
	for(x=0;x<s;x++){
		for(y=0;y<s;y++){
			sum[x][y]=a[x][y]+b[x][y];
		}
	}
	print(sum,s);
}
