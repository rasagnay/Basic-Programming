// PROBLEM //
Suppose you have two pets and you love both of them very much. 
You go to a pet store to buy different articles for your pets. 
But you ask salesman that you will buy only those articles which are actually in pair. 
In this store, articles are referred as integers. So you have to tell total no. of articles you will buy for your pets.

// CODE //

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
	    int n,count=0;
	    cin>>n;
	    vector<int> v(n);
	    map<int,int> m;
	    for(int i=0; i<n; i++) {
	        cin>>v[i];
	        m[v[i]]++;
	        if(m[v[i]] % 2 == 0) {
	           count ++;
	        }
	    }
	    
	    cout<<2*count<<endl;
	}
	return 0;
}
