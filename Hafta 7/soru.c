#include <stdio.h>
#include <stdlib.h>

struct node {
int number;
struct node * next;
};

void combine(struct node *a,struct node *b);

int main()
{
	struct node *liste,*cift,*iter,*iter_cift;
	
	int i=0;
	
	cift=(struct node*)malloc(sizeof(struct node));
	liste=(struct node*)malloc(sizeof(struct node));
	iter=liste;
	iter_cift=cift;
	
	while(i!=1){
		printf("sayi: ");
		scanf("%d",&i);
		
		if(i%2==0){
			iter_cift->number=i;
			iter_cift->next=(struct node*)malloc(sizeof(struct node));
			iter_cift=iter_cift->next;
		}
		else{
			iter->number=i;
			iter->next=(struct node*)malloc(sizeof(struct node));
			iter=iter->next;
		}
	}
	
	iter_cift=NULL; iter=NULL;
	
	combine(liste,cift);
	
	iter=liste;
	
	printf("\n");
	while(iter!=NULL){
		if(iter->number!=0)
			printf("%d ",iter->number);
		iter=iter->next;
	}
	
	return 0;
}

void combine(struct node *a,struct node *b){
	while(a->next!=NULL){
		a=a->next;
	}
	a->next=b;
}

