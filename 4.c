#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter Array Size :- ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    printf("Enter A's Elements :- \n");
    for(int i=0;i<n;i++) {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter B's Elements :- \n");
    for(int i=0;i<n;i++) {
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
    }
    printf("\nArray A :- ");
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\nArray B :- ");
    for(int i=0;i<n;i++) {
        printf("%d ",b[i]);
    }
    printf("\nArray C :- ");
    for(int i=0;i<n;i++) {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
    int allSum = findSum(c,n);
    printf("\n\nSum of all Elements of A[] and B[] is %d\n",allSum);
    return 0;
}
int findSum(int c[],int n) {
    int sum = 0;
    for (int i=0;i<n;i++) {
        sum += c[i];
    }
    return sum;
}