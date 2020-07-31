// PROBLEM //
Given an array A of size N, print the reverse of it.

// CODE //

#include <stdio.h>
int main()
{
int t,n,i,arr[10000],j,k;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
     scanf("%d",&arr[j]);
    }
    for(k=n-1;k>=0;k--)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");

}
	return 0;
}
