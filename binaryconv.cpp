// PROBLEM //
Given two binary strings that represent value of two integers, find the product of two strings. For example, if the first bit string is “1100” and second bit string is “1010”, output should be 120.

Input:
First line consists of T test cases. Only line of every test case consists of 2 binary strings.

Output:
Single line output, print the multiplied value.

// CODE //
#include <iostream>
#include<math.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
long s2=0; int p=0;
string str;
string str1;
cin>>str;
cin>>str1;
int k=str.length();
int s=str1.length();
long s1=0;
int l=0;
for(int i=k-1;i>=0;i--)
{
if(str[i]=='1')
s1=s1+pow(2,l);
l++;
}
for(int i=s-1;i>=0;i--)
{
if(str1[i]=='1')
s2=s2+pow(2,p);
p++;
}
cout<<s1*s2<<endl; 
}
return 0;
}
