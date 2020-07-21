// PROBLEM //
Given an integer array A of size N, find sum of elements in it.

// CODE //

#include <stdio.h>
int main() 
{
    int arr[100],sum=0,i,j,n,t;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    { 
        scanf("%d",&n);
     for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
     printf("%d\n",sum);
     sum=0;
    }
    return 0;
}
