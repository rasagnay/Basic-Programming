// PROBLEM //
Given a string of lowercase characters from ‘a’ – ‘z’. We need to write a program to print the characters of this string in sorted order.

Input:
The first line contains an integer T, denoting number of test cases. Then T test case follows. First line of each test case contains a string S each.

Output:
For each test case, print the string S in sorted order.

// CODE//

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int f[26]={0};
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length();i++)
	    {
	        f[s[i]-97]++;
	    }
	    for(int i=0;i<26;i++)
	    {
	        while(f[i]--)
	        {
	            char c='a'+i;
	            cout<<c<<"";
	        }
	        
	    }
	    cout<<endl;
	}
}
