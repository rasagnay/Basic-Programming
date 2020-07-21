// PROBLEM //
Given street of houses (a row of houses), each house having some amount of money kept inside; 
now there is a thief who is going to steal this money but he has a constraint/rule that he cannot steal/rob two adjacent houses.
Find the maximum money he can rob.

// CODE //

#include <stdio.h>

int main()
{
int t,n,i,m,res,count=0;
scanf("%d",&t);
for(i=0;i<t;i++)
{
   scanf("%d %d",&n,&m);

   for(int j=1;j<=n;j=j+2)
     {
         
      count=count+1;
     }
     
   
   res= count*m;
   
   printf("%d\n",res);
   res=0;
   count=0;
   
}
   return 0;
}
