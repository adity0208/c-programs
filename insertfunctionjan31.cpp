#include<stdio.h>
int*insert(int *a,int n,int x, int index){
	int i;
	for(i=n-1;i>=index;i--)
	a[i]=a[i-1];
	a[index]=x;
	return a;
}
int main(){
	int a[]={11,23,33,44,56,67,NULL};
	int x;
	scanf("%d",&x);
	int i,*p;
	for(i=0;i<7;i++){
	if(x<a[i])
	break;
}
	p=insert(a,7,x,i);
	for(i=0;i<7;i++)
	printf("%d\n",p[i]);
}
