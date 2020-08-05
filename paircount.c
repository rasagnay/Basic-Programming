// PROBLEM //
Suppose you have two pets and you love both of them very much. 
You go to a pet store to buy different articles for your pets. 
But you ask salesman that you will buy only those articles which are actually in pair. 
In this store, articles are referred as integers. So you have to tell total no. of articles you will buy for your pets.

// CODE //
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t,i;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int count=0;
    int i=0;
    while(i<n)
    {
      if(arr[i]==arr[i+1])
      {
        count++;
        i=i+2;
      }
      else
      i++;

    }
    cout<<(count*2);
    cout<<endl;
  }
  return 0;
}
