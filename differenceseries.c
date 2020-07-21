// PROBLEM //
Given a series of numbers  3,10,21,36 …., and series starting from n=1 , find the pattern and output the nth value of above series.

// CODE //

#include <stdio.h>

int main() 
{
	int t,n,i,res;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    
	    res= n*(2*n+1);
	    printf("%d\n",res);
	      res=0;  
	}
	return 0;
}
