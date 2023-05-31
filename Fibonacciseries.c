#include<stdio.h>
int main()
{
      int n;
      int a=0,b=1,c=0,i;
      scanf("%d",&n);
      for(i=3;i<=n;i++)
      {
          c=a+b;
          a=b;
          b=c;
      }
      printf("%d",c);
      return 0;
}