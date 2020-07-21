// PROBLEM //
Given an array, cyclically rotate an array by one.

// CODE //

#include <stdio.h>

int main() {
int t,i,n,arr[50],j,k;
scanf("%d",&t);
for(k=0;k<t;k++)
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d ",arr[n-1]);
    for(j=0;j<n-1;j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\n");
}
return 0;
}
