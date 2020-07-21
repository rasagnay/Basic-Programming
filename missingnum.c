// PROBLEM //
Vaibhav likes to play with numbers and he has n numbers.
One day he was placing the numbers on the playing board just to count that how many numbers he have.
He was placing the numbers in increasing order i.e. from 1 to n. 
But when he was putting the numbers back into his bag, some numbers fell down onto the floor. 
He picked up all the numbers but one number, he couldn't find. Now he have to go somewhere urgently, so he asks you to find the missing number.

// CODE //

#include <stdio.h>

int main()
{
int i,total=0,sum=0,n,t,a[100000],j,k,p,ans=0;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    scanf("%d",&n);
    for(p=0;p<n-1;p++)
    {
      scanf("%d",&a[p]);
    }
   
    total = (n*(n+1))/2;
    
    for(k=0 ; k<n-1; k++)
    {
     sum = sum + a[k];
    }
 ans=total-sum;
    printf("%d\n",ans);
 ans=0;
 total=0;
 sum=0;
    }  

    return 0;
}
