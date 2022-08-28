#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void clearScreen();

struct student{
	unsigned long number;
	char name[40];
	float midGrade,finaleGrade;
	struct student *next;
};

typedef struct student student;

student *head;

void create(student *);

void delete(int);

void add();

void print_all();

//void print(int);

//void combine(student *, student *);

void update();

float avarage(student *);

void print_avarage();

float best_note();

void best_ones();

void the_menu();

int main()
{
	int c=1;
	
	head=(student *)malloc(sizeof(student));

	create(head);
	
	while(c==1){
		the_menu();
		printf("\nWould you like to do another operation? (for yes; enter 1)\n: ");
		scanf("%d",&c);
	}

	return 0;
}

void the_menu(){
	
	int s;
	
	printf("1- Add New Record\n2- List Records\n3- Update Record\n4- Calculate Class Average\n5- Show Best Student Record According to Average\n6- Reset Menu\n7- Quit Menu\n\n");
	scanf("%d",&s);
	
	switch(s){
		
		case 1:
			
			add();
			break;
			
		case 2:
		
			print_all();
			break;
			
		case 3:
		
			update();
			break;
			
		case 4:
		
			print_avarage();
			break;
			
		case 5:
		
			best_ones();
			break;
			
		case 6:
			
			the_menu();
			return;
			
		case 7:
		
			return;
			
		default:
			printf("\nEror !\n\n");
	}
}

void create(student *iter){
	
	printf("student(s) total: "); int n, sira=1;
	scanf("%d",&n); printf("\n");
	
	if(n<1){
		printf("hata: oluşturma başarısız \n\nTekrar deneniyor...\n\n"); sleep(2);
		create(iter);
		return;
	}
	else {
		while(sira<=n){
			
			printf("name: ");
			scanf("%s",iter->name);
			printf("number: ");
			scanf("%lu",&iter->number);
			printf("midGrade: ");
			scanf("%f",&iter->midGrade);
			printf("finaleGrade: ");
			scanf("%f",&iter->finaleGrade);
			printf("\n\n");
			
			sira++;
			
			if(sira<=n){
				iter->next=(student *)malloc(sizeof(student));
				iter=iter->next;
			}
			else{
				iter->next=NULL;
			}
		}
	}
}

void print_all(){
	student *iter=head;
	printf("\n");
	while(iter!=NULL){
		printf("student num:%lu\nname:%s\nmidGrade:%f finaleGrade:%f\n\n",iter->number,iter->name,iter->midGrade,iter->finaleGrade); sleep(1);
		iter=iter->next;
	}
	printf("\n");
}

/*void print(int n){
	student *iter=head;
	while(iter->number!=n){
		iter=iter->next;
	}
	printf("student num:%lu\nname:%s\nmidGrade:%f finaleGrade:%f\n\n",iter->number,iter->name,iter->midGrade,iter->finaleGrade);
}*/

/*void combine(student *head_main,student *head_sub){
	student *iter=head_main;
	
	while(iter->next!=NULL){
		iter=iter->next;
	}
	iter->next=head_sub;
}
*/
void delete(int n){
	
	student *temp=head;
	
	if(n==1){
		head=head->next;
		free(temp);
		return;
	}
	else{
		
		while(temp->number!=n){
			temp=temp->next;
		}
		
		student *iter=head;
		
		while(iter->next->number!=temp->number){
			iter=iter->next;
		}
		iter->next=iter->next->next;
		free(temp);
	}
}

void add(){
	student *new=(student *)malloc(sizeof(student));
	create(new);
	int root; printf("\nFrom which student do you want to add (to add from the top, enter 0): "); scanf("%d",&root);
	student *iter;
	if(root==0){
		iter=new;
		while(iter->next!=NULL){
			iter=iter->next;
		}
		iter->next=head;
		head=new;
	}
	else{
		iter=head;
		while(iter->number!=root){
			iter=iter->next;
		}
		student *temp=iter->next;
		iter->next=new;
		while(iter->next!=NULL){
			iter=iter->next;
		}
		iter->next=temp;
	}
}

void update(){
	
	long unsigned num;
	printf("The number of the student whom you attempt to change its information\n: ");
	scanf("%lu",&num);
	
	student *iter=head;
	
	while(iter->number!=num){
		iter=iter->next;
	}
	
	printf("The information you would like to update:\n\nmidGrade: 1\nfinaleGrade: 2\nNumber: 3\nName: 4\n: ");
	int s; scanf("%d",&s);
	
	
	switch(s){
		
		case 1:
			printf("The new (correct) midGrade: ");
			scanf("%f",&iter->midGrade);
			break;
			
		case 2:
			printf("The new (correct) finaleGrade: ");
			scanf("%f",&iter->finaleGrade);
			break;
			
		case 3:
			printf("The new (correct) number: ");
			scanf("%lu",&iter->number);
			break;
			
		case 4:
			printf("The new (correct) name: ");
			scanf("%s",iter->name);
			break;
			
		default:
			clearScreen(); sleep(2);
			printf("please enter a valid value\n\n"); clearScreen();
			update(head,num);
			return;
	}
}

float avarage(student *iter){
	
	static int sum=0, counter=0;
	
	if(iter==NULL)
		return sum/counter;
	
	sum = sum + (0.4*iter->midGrade + 0.6*iter->finaleGrade);
	counter++;
	
	iter=iter->next;
	
	return avarage(iter);
}

void print_avarage(){
	
	float avarage_value = avarage(head);
	
	printf("\nAvarage Grade is: %.2f",avarage_value);
	
}

float best_note(){
	
	float best_note=-1;
	
	student *iter=head;
	
	while(iter!=NULL){
		
		if(0.4*head->midGrade + 0.6*head->finaleGrade>best_note)
			best_note = head->finaleGrade;
		
		iter=iter->next;
	
	}
	
	return best_note;
	
}

void best_ones(){
	
	float the_best_note = best_note(head);
	
	student *iter=head;
	
	while(iter!=NULL){
		
		if(0.4*iter->midGrade + 0.6*iter->finaleGrade == the_best_note)
			printf("student num:%lu\nname:%s\nmidGrade:%f finaleGrade:%f\n\n",iter->number,iter->name,iter->midGrade,iter->finaleGrade);
			
		iter=iter->next;
	}

}
			
void clearScreen()
{
  printf("\e[1;1H\e[2J");
}
