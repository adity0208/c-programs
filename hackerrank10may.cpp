#include<stdio.h>
int rev(int n){
	int x=0
	while(n!=0){
		x=x*10+n%10;
		n=n/10;
	}
	return x;
	}
int main()
{
	int i,j,k,x;
	int c=0;
	while(i<=j){
		if((i-rev[i])%k==0){
		x++;
		}
	i++;
	}
	return c;
}