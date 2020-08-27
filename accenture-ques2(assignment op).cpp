// PROBLEM // 
Problem Statement

You are required to implement the following function.

Int OperationChoices(int c, int n, int a , int b )

The function accepts 3 positive integers ‘a’ , ‘b’ and ‘c ‘ as its arguments. Implement the function to return.

( a+ b ) , if c=1
( a + b ) , if c=2
( a * b ) ,  if c=3
(a / b) ,  if c =4
Assumption : All operations will result in integer output.

Example:

Input
c :1
a:12
b:16
Output:
Since ‘c’=1 , (12+16) is performed which is equal to 28 , hence 28 is returned.

// CODE //

#include<iostream>
using namespace std;
int main()
{
    int c,a,b,i,res1,res2,res3,res4;
    cin>>c;
    cin>>a;
    cin>>b;
    if(c==1)
    {
     res1=(a+b);
      cout<<res1;
    }
    if(c==2)
    {
     res2=(a-b);
     cout<<res2;
    }
    if(c==3)
    {
     res3=a*b;
     cout<<res3; 
    }
    if(c==4)
    {
     res4=a/b;
    cout<<res4;
    }
    return 0;
}
