#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i;
    printf("enter the string: ");
    scanf("%s", str);
    /*to print string in lower case*/

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }

    printf("\nstring in lower case : %s", str);
    /* to print string in lower case*/
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }

    printf("\n string in upper case : %s", str);

        return 0;
}