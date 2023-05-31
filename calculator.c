#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b;
    char op;
    scanf("%d %d",&a,&b);
    fflush(stdin);
    scanf("%c",&op);
    switch(op)
    {
	case '+':
		printf("\n addition=%d",(a+b));
		break;
	case'-':
		printf("\n substraction=%d",(a-b));
		break;
	case'*':
		printf("\n multiplication=%d",(a*b));
		break;
	case'/':
		printf("\n division=%f",(a/b));
		break;
	default:
		printf("\n invalid operation");
    }
    printf("\n task over");
    return 0;
}
    