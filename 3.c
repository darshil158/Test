#include <stdio.h>
int check(int n) {
    if(n%3==0 && n%5==0) {
        return printf("Number %d is divisible by 3 and 5\n",n);
    }
    else if(n%3==0) {
        return printf("Number %d is only divisible by 3\n",n);
    }
    else if(n%5==0) {
        return printf("Number %d is only divisible by 5\n",n);
    }
    else {
        return printf("Number %d is not divisible by 3 and 5\n",n);
    }
}
int main()
{
    int n;
    printf("Enter any Number :- ");
    scanf("%d",&n);
    check(n);
    return 0;
}