// PROBLEM //
Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms)

// CODE //

#include <stdio.h>
int main()
{
int t,n,i,sum=0 ,j;
scanf("%d",&t);
for(j=0;j<t;j++)
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
sum=0;
}
    return 0;
}
