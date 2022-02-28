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
    strcat(s,s1);
    printf("After concatenating 1st string and 2st string it becomes  %s",s);
}