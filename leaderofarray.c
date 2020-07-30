// PROBLEM //
Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader. 

// CODE //

int main() {
	//code
	long n,t,i,temp;
	scanf("%ld",&t);
	while(t--)
	{
	    scanf("%ld",&n);
	    long arr[n],a[n];
	    for(i=0;i<n;i++)
	    scanf("%ld",&arr[i]);
	    for(i=0;i<n;i++)
	    a[i]=-1;
	    temp=arr[n-1];
	    for(i=n-1;i>=0;i--)
	    {
	        if(arr[i]>=temp)
	        {
	            temp=arr[i];
	            //printf("%ld ",temp);
	            a[i]=temp;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]!=-1)
	        printf("%ld ",a[i]);
	    }
	    printf("\n");
	}
	return 0;
}
