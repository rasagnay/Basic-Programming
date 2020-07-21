// PROBLEM //
Given an array of even size, task is to find minimum value that can be added to an element so that array become balanced. 
An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.

// CODE //

#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int t,n,i,arr[10000],sum1=0,sum2=0,k,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr[j]);
        
        if(j<n/2)
        {
            sum1=sum1+arr[j];

        }
        else
        {
            sum2=sum2+arr[j];
        }
    }
    printf("%d\n",abs(sum2-sum1));
    sum1=0;sum2=0;
    
}
	return 0;
}
