// PROBLEM //
You are given an integer input N and you have to find whether it is Anshuman’s favourite or not.
If it is then print “YES” else print “NO”.
A number is Anshuman’s favourite if it is either the sum or the difference of the integer 5. (5+5, 5+5+5, 5-5,5-5-5+5+5…..)

//CODE
#include <stdio.h>

int main() {
	int t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    if(n%5==0)
	    
	        printf("YES\n");
	  
	    else
	    printf("NO\n");
	}
	
	return 0;
}
