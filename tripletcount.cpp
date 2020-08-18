// PROBLEM //
Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

// CODE //

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 {
	
	int t;
	cin >> t;
	while(t>0)
	{
	    int n;
	    cin >> n;
	    int i, count = 0, a[n];
	    for(i=0; i<n; i++)
	    {
	        cin >> a[i];
	    }
	    
	    sort(a, a+n);
	    
        for(i=n-1; i>1; i--)
        {
            int j = 0;
            int k = i-1;
            while(j<k)
            {
                if(a[j]+a[k] == a[i])
                {
                    count++ ;
                    j++;
                    k--;
                    
                }
                else if(a[j]+a[k] < a[i])
                j++;
                else
                k--;
            }

        }
        if(count!=0)
        cout << count << endl;
        else
        cout << -1 << endl;
	    
	    t--;
	}
	return 0;
}
