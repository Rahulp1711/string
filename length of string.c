#include <stdio.h>
#include <string.h>
int main()
{
    char s[30];
    printf("Enter string:\n");
    scanf("%[^\n]s",s);
    printf("Length of string is %ld",strlen(s));
}