#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
int main()
{
    char s[30],s1[30];
    printf("Enter string:\n");
    scanf("%[^\n]s",s);
    __fpurge(stdin);
    printf("Enter string:\n");
    scanf("%[^\n]s",s1);
    strcpy(s,s1);
    printf("After copying 2nd string into 1st string 1st string become  %s",s);
}