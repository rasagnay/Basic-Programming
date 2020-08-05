// PROBLEM //
The RPS world championship is here. Here two players A and B play the game. You need to determine who wins.
Both players can choose moves from the set {R,P,S}.
The game is a draw if both players choose the same item.
The winning rules of RPS are given below:

Rock crushes scissor
Scissor cuts paper
Paper envelops rock
// CODE //

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
char s1,s2;
cin>>s1>>s2;
if(s1==s2)
{
cout<<"DRAW";
}
else
if(s1=='R' && s2=='S')
{
cout<<"A";
}
else
if(s1=='S' && s2=='R')
{
cout<<"B";
}
else
if(s1=='S' && s2=='P')
{
cout<<"A";
}
else
if(s1=='P' && s2=='S')
{
cout<<"B";
}
else
if(s1=='P' && s2=='R')
{
cout<<"A";
}
else
if(s1=='R' && s2=='P')
{
cout<<"B";
}
cout<<endl; }
return 0;
}
