// PROGRAM //
Count the numbers between 1 to N containing 4 as a digit.

// CODE //

#include <iostream>
using namespace std;

int main() {
int t,a,i,count=0,p;
cin>>t;
while(t--)
{
cin>>a;
for(i=1;i<=a;i++)
{
p=i;
while(p!=0)
{
if((p%10)==4)
{
count++;break;
}

}
}
cout<<count<<endl; 
count=0; 
    
}
return 0;
    
}
