#include<stdio.h>
int*insert(int *a,int n,int x, int index){
	int i;
	for(i=n-1;i>=index;i--)
	a[i]=a[i-1];
	a[index]=x;
	return a;
}
int main(){
	int a[]={11,23,-1,45,67,NULL};
	int i,*p;
	p=insert(a,6,90,2);
	for(i=0;i<6;i++)
	printf("%d\n",p[i]);
}