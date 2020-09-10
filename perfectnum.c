// PROBLEM //
Perfect Number and Divisors
Have you heard of Perfect numbers? If not let me tell you what is it, Perfect Numbers are integers that are equal to the sum of all its divisors except that number itself.
Now, given an integer N,write a program to print true if it is a perfect number or false if it is not a perfect number.

// CODE //
#include <stdio.h>

int main()
{
    int i, num, sum = 0,t;
   scanf("%d",&t);
   while(t--)
   {
    scanf("%d", &num);
      sum=0;
    for(i = 1; i <= num / 2; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
  
}
    return 0;
}

