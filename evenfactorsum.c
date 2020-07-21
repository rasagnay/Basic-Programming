// PROBLEM //
Given a number n, the task is to find the even factor sum of a number.

// CODE //

#include <stdio.h>

int main()
{
    int t,i,n,sum=0,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        
        scanf("%d",&n);
       for(i=2;i<=n;i+=2)
     {
        if(n%i==0)
        {
       sum=sum+i;
     }
     

     }
   
      printf("%d\n",sum); 
    sum=0;
    }
  return 0;
}
