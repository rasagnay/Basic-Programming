// PROBLEM //
Given two positive integers N and X, where N is the number of total patients and X is the time duration (in minutes)
after which a new patient arrives. Also, doctor will give only 10 minutes to each patient. 
The task is to calculate the time (in minutes) the last patient needs to wait.

// CODE //

#include <stdio.h>

int main() {
	int t,n,i,x,a,b,res;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d",&n,&x);
	    a=10-x;
	    b=n-1;
	    res=a*b;
	    printf("%d\n",res);
	    
	}
	return 0;
}
