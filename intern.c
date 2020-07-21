// PROBLEM //
Ishaan wants to intern at GeeksForGeeks but for that he has to go through a test. 
There are N candidates applying for the internship including Ishaan and only one is to be selected.
Since he wants to qualify he asks you to help him. The test is as follows.
The candidates are asked to stand in a line at positions 1 to N and given a number K. 
Now, every Kth candidate remains and the rest are eliminated. This is repeated until the number of candidates are less than K.
Out of the remaining candidates, the one standing at smallest position is selected. You need to tell Ishaan at position he must stand to get selected.

// CODE //

#include <stdio.h>
#include<math.h>
int main() {
	int ans=1;
	int t,n,k;
	scanf("%d",&t);
	for (int p=0;p<t;p++){
	    scanf("%d %d",&n,&k);
	    while(n>=k)
	    {
             n=n/k;
             ans=ans*k;
	    }
	    printf("%d\n",ans);
	    ans=1;
	}
	return 0;
}
