// PROBLEM //
Given three numbers a, b and c such that a, b and c can be at most 1016. The task is to compute (a*b)%c

// CODE //
#include<stdio.h>
int main()
{
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
long long int a,b,c,res,n;
scanf("%lld %lld %lld",&a,&b,&c);
n=a*b;
res=n%c;
printf("%lld\n",res);
}
return 0;
}
