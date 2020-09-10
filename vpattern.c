// PROBLEM //
Print in the output the exact pattern provided below
1        1
12      21
123    321
1234  4321
1234554321

Input format
A single character denoted by 
c
h

Output format
Print the same pattern provided in the problem statement.

// CODE //

#include <stdio.h>

int main()
{
    int i, j, N=5;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for(j=i*2; j<N*2; j++)
        {
            printf("  ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
