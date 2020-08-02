#include <stdio.h>
#include <string.h>

int main()
{
    char str1[45], str2[45];
    int i, l;
    printf("Enter the string-1 :");
    scanf("%s", str1);
    printf("enter the string-2 :");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
    {
        l = strlen(str1);
        printf("string are equal and the lenth is : %d", l);
    }
    else if (strcmp(str1, str2) > 0)
    {
        printf("string 1 is greater");
        for (i = 0; i < strlen(str1); i++)
        {
            if (str1[i] >= 97 && str1[i] <= 122)
            {
                str1[i] -= 32;
            }
        }
        printf("\n string in uppercase : %s", str1);

        for (i = 0; i < strlen(str2); i++)
        {
            if (str2[i] >= 65 && str2[i] <= 90)
            {
                str2[i] += 32;
            }
        }

        printf("\nstring in lower case : %s", str2);
    }

    else
    {
        printf("string 2 is greater");
        for (i = 0; i < strlen(str2); i++)
        {
            if (str2[i] >= 97 && str2[i] <= 122)
            {
                str2[i] -= 32;
            }
        }
        printf("\nstring 2 in uppercase %s", str2);

        for (i = 0; i < strlen(str1); i++)
        {
            if (str1[i] >= 65 && str1[i] <= 90)
            {
                str1[i] += 32;
            }
        }
        printf("\n string 1 in lower case %s", str1);
    }
    return 0;
}