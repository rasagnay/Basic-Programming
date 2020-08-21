// PROBLEM //
Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.
You are required to complete the function encode that takes only one argument the string which is to be encoded and returns the encoded string.

// CODE //
#include <stdio.h>
#include <string.h>

int main()
{
    int max=10000,i,len,ans[26];
    char str[max];

    scanf("%[^\n]s", str);
    len = strlen(str);
    for(i=0; i<26; i++)
    {
        ans[i] = 0;
    }
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            ans[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            ans[str[i] - 65]++;
        }
    }
    for(i=0; i<26; i++)
    {
        if(ans[i] != 0)
        {
            printf("%c%d", 'a'+i , ans[i]);
        }
    }
    return 0;
}
