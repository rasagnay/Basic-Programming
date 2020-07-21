// PROBLEM //
Sum a digit until its last digit.

// CODE //

#include<stdio.h> 
int main(void) 
{ 
    long num; 
    int dig,sum,t,i; 
   scanf("%d",&t);
   for(i=0;i<t;i++)
   
   {
    scanf("%ld",&num); 
   
    do 
    { 
        sum = 0;  
        while(num!=0)  
        { 
            dig=num%10; 
            num/=10; 
            sum=sum+dig; 
            
        } 
       
        num=sum; 
    }while(num/10!=0); 
     printf("%d\n",sum); 
   }
    return 0; 
}
