// PROBLEM //
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively 
i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on...

// CODE //
#include <stdio.h>
int main() {
	int t,n,flag=0;
	scanf("%d",&t);
	for(int k=0;k<t;k++){
	    scanf("%d",&n);
	    int a[n],i=0,j=n-1;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    while(i<j){
	        printf("%d ",a[j]);
	        printf("%d ",a[i]);
	        i++;
	        j--;
	    }
	    if(n%2!=0){
	        printf("%d",a[n/2]);
	    }
	    printf("\n");}
	return 0;
}
