#include <stdio.h>
void main()
{
    int n,rev=0,rem;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("the sum is %d",rev);
}
