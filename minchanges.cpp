// PROBLEM //
Given a string s, find the minimum number of changes required to it so that all substrings of the string become distinct.

Note: length of string is atmost 26.

Input:
The first line contains an integer T, number of test cases. For each testcase there is only one line containing s atmost 26 characters.

Output:
For each testcase in new line, print the minimum number of changes to the string.

// CODE //
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
int count=0,p,t;
    char string[80];
    cin>>t;
    for(p=0;p<t;p++)
    {
    cin>>string;
    for(int i=0;i<strlen(string);i++){                    
        for(int j=i+1;j<strlen(string);j++){
            if(string[i]==string[j])
            { 
              count=count+1;     
             
                break;
            }

             
        }
         
    }

      cout<<count;    
    }
    return 0;
}
