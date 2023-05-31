#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int DigitSum(int num){
    if(num == 0)
        return 0;
    else
        return (num%10)+DigitSum(num/10);
}

int main() {
    int num,s;
    printf("enter the number");
    scanf("%d",& num);
    s=DigitSum(num);
        printf("sum=%d",s);
    return 0;
}
