#include <stdio.h>
#include <stdlib.h>
struct link{
	int id;
	float data;
	struct link *next;
};
typedef struct link link;
link *head;
int create_list();
void print_list(int);
void delete_head();
void delete(link*);
int main()
{
	int n,d=0;
	n=create_list();
	printf("\n");
	print_list(n);
	link *iter=head;
	while(iter->next!=NULL){
		while(iter->data>=25){
			delete_head();
			d++;
			iter=head;
		}
		if(iter->next->data>=25){
			delete(iter);
			d++;
			}
		else{
			iter=iter->next;
		}
	}
	printf("\n");
	print_list(n-d);
	return 0;
}
int create_list(){
	head=malloc(sizeof(link));
	printf("enter the number of data that will be linked: ");
	int n;
	scanf("%d",&n);
	printf("\nenter the list: \n");
	int i;
	link *iter=head;
	for(i=0;i<n;i++){
		iter->id=i;
		printf("%d- data: ",i+1);
		scanf("%f",&iter->data);
		iter->next=malloc(sizeof(link));
		iter=iter->next;
	}
	iter=NULL;
	return n;
}
void print_list(int n){
	link *iter;
	iter=head;
	int i;
	for(i=0;i<n;i++){
		printf("%d- id_%d_data_id_: %.2f\n",i+1,iter->id,iter->data);
		iter=iter->next;
	}
}
void delete_head(){
	link *temp;
	temp=head;
	head=head->next;
	free(temp);
}
void delete(link* iter){
	link *temp;
	temp=iter->next;
	iter->next=iter->next->next;
	free(temp);
}
