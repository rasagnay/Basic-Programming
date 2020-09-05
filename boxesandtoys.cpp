// PROBLEM //
Boxes and Toys
Tina and Rahul have 1 toy each. They are entering into an amusement park but it is not allowed to take the toys inside, so they have to keep it in the boxes provided by the park management. They want to keep the toys together in one box. There are 
N boxes in total, at this moment there are ti toys present in ith box and the maximum capacity of the box is denoted by ci. 
Rahul and Tina want to know in how many boxes can they keep their toys such that both the toys are in the same box.

// CODE //
#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  int count=0;
  while(t--){
    
    int x,y;
    cin>>x>>y;
    
    if(y-x>=2)
    count++;
    
  }
  cout<<count;
  return 0;
}
