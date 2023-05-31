#include<stdio.h>
int main(){
	int i=5,*p;
	p=&i;
	printf("%d\t%d",sizeof(p),sizeof(i));
	printf("\n%u\t%u",p,&i);
	if(p==&i)
	puts("true");
	else
	puts("false");
}