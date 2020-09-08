// PROBLEM //
Let us give you a fairly simple array problem to solve. If you know how to iterate through the array, you will easily be able to solve this.
The problem statement is simple- given 
N elements, find the minimum and maximum numbers among those elements.

Input format
The first line contains test case T denoting the number of test cases.
Each test case consists of two lines, First-line contains N representing the length of the array.
The second line contains N space-separated integers.

Output format
For each test case on a new line, print minimum and maximum element 

// CODE //

#include <stdio.h>
int main()
{
    
    int i,t, max, min, size;
scanf("%d",&t);
while(t--)
{
    scanf("%d", &size);
    int arr[size+1];
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("%d ", min);
    printf("%d", max);
    printf("\n");
}
    return 0;
}
