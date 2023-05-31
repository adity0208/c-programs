#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int GCD(int a, int b)
{
	
	if(b==0)
	return a;
	else if(b>1){
		return GCD(b,a%b);
	}
	else
		return 1;
}
int main()
{
	int a,b,res;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	res= GCD(a,b);
	printf("%d",res);
	return 0;
}