// PROBLEM //
First line of the input contains the number of test cases T, T lines follow each containing a stream of characters.
//CODE//

#include<string.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char a[100000];
	    int i,c=1;
	    scanf("%s",&a);
	    for(i=strlen(a)-1;i>=0;i--)
	    {
	        if(a[i]=='1')
	        {
	            printf("%d\n",i);
	            c=0;
	            break;
	        }
	    }
	    if(c==1){
	        printf("-1\n");
	    }
	  }
	return 0;
}
