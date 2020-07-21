// PROBLEM //
For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.

// CODE //

#include <stdio.h>

int main() {
int n,i,t,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
scanf("%d",&n);
for(j = 2; j <= n/2; j++)
{
if(n % j ==0)
{
break;
}
}
if(j > n/2)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
