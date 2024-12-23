
#include <stdio.h>
#include<stdlib.h>
void main() {
 int i,n,sume=0,sumo=0 ;   // Write C code here
 printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    if(i%2 == 0)
    {
    sume=sume+i;
    }
    else
    {
        sumo=sumo+i;
    }
}
printf("the difference is %d",abs(sume-sumo));
}
