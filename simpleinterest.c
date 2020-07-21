// PROBLEM //
Write a program to find the simple interest for given principal amount P, time Tm(in years) and rate R.

// CODE //

#include <stdio.h>

int main() 
{
	int t,p,i,n,r,res;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d ",&p,&n,&r);
	    
	        res = p*n*r/100;
	        printf("%d\n",res);
	    
	    }
	return 0;
}
