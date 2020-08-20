// PROBLEM //
Shubham wrote a sequence of words. The words are written using the rules given below:

The sequence is concatenation of one or more words consisting of English letters.
All letters in the first word are lowercase.
For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.
You need to find the number of words in the string.

// CODE //

#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	char st[10000];
	int i,cnt=0;
     scanf("%s",&st);
	for(i=0;i<strlen(st);i++)
	{
		if(st[i]>=65&&st[i]<=90){
			cnt++;
		}
		
	}
printf("%d",cnt+1);
printf("\n");
}
return 0;
}
