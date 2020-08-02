#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    char str[30];
    int i;
    printf("enter the string : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((i % 2) == 0)
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
    }

    printf("new string :%s", str);

    return 0;
}