// PROBLEM //
Given an array A of N elements. 
Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

// CODE //

int main() {
    long t,n,temp,i,max;
    scanf("%ld",&t);
    while(t--)
    {
        max=-1;
        scanf("%ld",&n);
        temp=n/2;
        long arr[n],a[n];
        for(i=0;i<n;i++)
        a[i]=0;
        for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
        for(i=0;i<n;i++)
        a[arr[i]]++;
        for(i=0;i<n;i++)
        {
            if(a[i]>temp)
            max=i;
        }
        printf("%ld\n",max);
    }
	return 0;
}
