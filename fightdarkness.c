// PROGRAM //
You are given an array A representing size of candles which reduce 1 unit in a day. 
Room is illuminated using given x candles, where x is the size of array A. Question is to find maximum number of days room is without darkness.

// CODE //

#include<stdio.h>
int main() {
	unsigned long long int n,a[100000],i,t,max;
	scanf("%llu",&t);
	while(t--)
	{
	    scanf("%llu",&n);
	    for(i=0;i<n;i++)
	    {
	        //%lld-long long int(signed)
	        //unsigned long long int- %llu
	        scanf("%llu",&a[i]);
	    }
	    max=a[0];
	    for(i=1;i<n;i++)
	    {
	        if(max<a[i])
	        max=a[i];
	    }
	    printf("%llu\n",max);
	    
	}
	return 0;
}
