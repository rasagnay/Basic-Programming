// PROBLEM //
Array Rotation
PrepBuddy has recently heard about something called Array Rotation and wants you to write a code for rotating an array.
So what happens in array rotation is, you are given an integer array 
A of size N and an integer K, you have to rotate the array in the right direction by K steps(See test cases for better understanding). 
The task is to print the rotated array.

Input Format
The first line contains an integer T denoting the number of test cases. Each test case consists of two lines.
The first line contains N, number of elements in the array and K number of steps.
The Second line contains N space-separated integers.

Output Format
For each test case on a new line, print the rotated array.

// CODE //
#include <stdio.h>

int main()
{
  int t=0;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    int n=0,k=0;
    scanf("%d %d",&n,&k);
    if(k>n)
    k=k%n;
    int a[n];
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[j]);
      if(j>=n-k)
        printf("%d ",a[j]);
    }
    for(int j=0;j<n-k;j++)
      printf("%d ",a[j]);
    printf("\n");
  }
}
