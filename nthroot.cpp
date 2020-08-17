// PROBLEM //
You are given 2 numbers (N , M); the task is to find N√M (Nth root of M).

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two space separated integers N and M.

Output:
For each test case, in a new line, print an integer denoting Nth root of M if the root is an integer else print -1.

// CODE //

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    
    while(t--)
    {
        int n,m; 
        cin>>n>>m;
        float p=((log10(m))/n);
        float q=ceil(pow(10,p));
        float u=floor(pow(10,p));
        int r=pow(q,n);
        int s=pow(u,n);
        if(r==m)
        cout<<q;
        else if(s==m)
        cout<<u;
        else
        cout<<-1;
        cout<<endl;
    }
}
