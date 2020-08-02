#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], s1[100], t[100];

    int i;
    printf("enter the string :");
    gets(s);
    strcpy(s1, s);
    int j = 0;
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        t[j++] = s[i];
    }
    printf("string after reversing :%s", t);
    return 0;
}