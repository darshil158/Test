#include <stdio.h>

int main()
{
    int n,a,b,i;
    printf("Enter a 3-digit Number :- ");
    scanf("%d",&n);
    a=n/100;
    b=n;
    if(n<=999 && n>99) {
        for(i=0;i<=n;i++) {
            b=b%10;
        }
        printf("Sum of the first and last digit of 3-digit Number %d is %d\n",n,a+b);
    }
    else {
        printf("Please Enter a Positive 3-digit Number !!!\n");
    }
    return 0;
}