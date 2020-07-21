// PROBLEM //
Pitsy needs help in the given task by her teacher. 
The task is to divide a array into two sub array (left and right) 
containing n/2 elements each and do the sum of the subarrays and then multiply both the subarrays.

// CODE //

#include <stdio.h>
int main() {
	int t,n,i,arr[10000],j,sum=0,k,res=0,z,p;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
  
        for(k=0;k<n;k++)
             {
                scanf("%d",&arr[k]);
            }
	    for(j=0;j<n;j++)
	        {
	        if(j<n/2)
	        sum=sum+arr[j];
            else{
            res=res+arr[j];
            }
	        }
        p=sum*res;
	    printf("%d\n",p);
	    sum=0,p==0,res=0;
	
	}
	return 0;
}
