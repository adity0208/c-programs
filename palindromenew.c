#include<stdio.h>
int main()
{
	int n,num,d1,d2,d3,rev;
	printf("enter a 3 digit number");
	scanf("%3d",& num);
	n=num;
	d1=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d3=num%10;
	num=num/10;
	rev=d1*100+d2*10+d3*1;
	(n==rev)?printf("palindrome number"):printf("not palindrome");
	return 0;
	
}