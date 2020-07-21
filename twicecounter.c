// PROBLEM //
Given an array of n words. Some words are repeated twice, count such words.

// CODE //

#include<stdio.h>
int main() {
	//code
	
	int t,i,j,n,k;
	scanf("%d",&t);
	while(t--)
	{
	     scanf("%d",&n);
	     char a[1000][1000];
	     for(i=0;i<n;i++)
	     {
	         scanf("%s",a[i]);
	     
	       }
	       
	       
	       k=0;
	       for(i=0;i<n;i++)
	       {
	            int count=0;
	       
	            for(j=0;j<n;j++)
	            {
	            if(j!=i)
	            {
	                if(!strcmp(a[i],a[j])) 
	                {
	                    count++;
	                }
	            }
	                
	            }
	            
	            if(count==1)
	            {
	                k++;
	            }
	       }
	       	    printf("%d\n",k/2);

	}
	return 0;
}
