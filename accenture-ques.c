// PROBLEM //
char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). 
Implement the function to move all hyphens(.) in the string to the front of the given string.

NOTE:- Return null if str is null.

Example :-

Input:
str.Move-Hyphens-to-Front
Output:
-MoveHyphenstoFront

// CODE //
#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,count=0;
  char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    for(i=0;i<strlen(name);i++)
    {
    if(name[i]=='-')
    {
      count+=1;
    } }
    for(i=0;i<count;i++)
    {
      printf("-");
    }
    for(i=0;i<strlen(name);i++)
    {
    if(name[i]=='-')
    {
      continue;
    }
    else{
      printf("%c",name[i]);
    }
    }
    return 0; 
    }
