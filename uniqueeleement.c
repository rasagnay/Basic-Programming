// PROBLEM //
Given an array which contains all elements occurring k times, but one occurs only once. Find that unique element.

// CODE //

#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j,e;
	    scanf("%d",&n);
	    scanf("%d",&e);
	    int a[n],flag=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	                flag=1;
	                break;
	            }
	        }
	            if(flag==0)
	            {
	                printf("%d\n",a[i]);
	                break;
	               
	            }
	            flag=0;
	    }
	}
	return 0;
	
}
