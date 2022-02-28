#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
int main()
{
    char s[30],s1[30];
    int i;
    printf("Enter string:\n");
    scanf("%[^\n]s",s);
    __fpurge(stdin);
    printf("Enter string:\n");
    scanf("%[^\n]s",s1);
    i=strcmp(s,s1);
    if(i==0)
    printf("Both strings are same \n");
    else if(i>0)
    printf("1st string is greter than second string\n");
    else
    printf("2nd string is greter than 1st string\n");
   
}