// PROBLEM //
Leap Year or Not
We all have made fun of our friends who have their birthdays on 
29th February. Given birthday year N of your friend, can you tell her if that is leap year or not? 

Input format
The first line constains an integer 
T denoting the number of test cases.
Each test case contains one integer N

Output format
For each test case on a new line, print Yes if the given year is a leap year else print No.

Time Limit
1
 second

// CODE //

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,n,i;
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>n;
    if(n%4==0 && n%100!=0 || n%400==0)
    {
    cout<<"Yes"<<endl;
    }
    else
    {
     cout<<"No"<<endl;
    }
  }
  
  return 0;
}
