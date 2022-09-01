#include <stdio.h>
#include <stdlib.h>

void w(char *);
void r();

int main()
{
	/*char *a=(char *)malloc(40*sizeof(char));
	scanf("%s",a);
	w(a);*/
	r();
	
	return 0;
}

void w(char *c){
	FILE *f=fopen("test","w");
	int i;
	for(i=0;*(c+i)!='\0';i++){
		fprintf(f,"%c",*(c+i));
	}
	fclose(f);
}

void r(){
	FILE *f;
	char a;
	f=fopen("test","r");
	while(!feof(f)) {
		fscanf(f,"%c",&a);
		if(!feof(f))
			printf("%c",a);
	}
	fclose(f);
}
