// PROBLEM //
Given an array containing equal number of positive and negative elements, arrange the array such that every positive element is followed by a negative element.

// CODE //

#include<stdio.h>
 int main() 
 {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],i,p=0,q=1,b[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>0)
	        {
	            b[p]=a[i];
	            p=p+2;
	        }
	        else
	        {
	            b[q]=a[i];
	            q=q+2;
	        }    
	    }
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",b[i]);
	    }
	    printf("\n");
	    
	}
	return 0;
}
