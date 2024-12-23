// Online C compiler to run C program online
#include <stdio.h>
void main()
{
int a=0,b=1,c,i,n;
printf("enter n");
scanf("%d",&n);
printf("the valuesn of a and b %d%d",a,b);
for(i=2;i<n;i++)
{
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
}
}
