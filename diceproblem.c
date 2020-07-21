// PROBLEM //
You are given a cubic dice with 6 faces. 
All the individual faces have a number printed on them. 
The numbers are in the range of 1 to 6, like any ordinary dice. 
You will be provided with a face of this cube, your task is to guess the number on the opposite face of the cube.

// CODE //

#include <stdio.h>

int main() 
{
int t,n,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    scanf("%d",&n);
    if(n==1)
    printf("6\n");
    else if(n==6)
    printf("1\n");
    else if(n==2)
    printf("5\n");
    else if(n==5)
    printf("2\n");
    else if(n==3)
    printf("4\n");
    else 
    printf("3\n");
}
return 0;
}
