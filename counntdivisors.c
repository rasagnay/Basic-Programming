// PROBLEM //
Given a range [m..n]. You task is to find the number of integers divisible by either a or b in the given range.

// CODE //

#include <stdio.h>

int main()
{
    int t,j,m,n,a,b,i,count=0;
    scanf("%d",&t);
    for(j=0;j<t;j++)
{
    scanf("%d %d %d %d",&m,&n,&a,&b);
    

for(i=m;i<=n;i++)
{
    if(i%a==0 || i%b==0)
    {
        count=count+1;
        
    }
    
}
printf("%d\n",count);
count=0;
}
	return 0;
}
