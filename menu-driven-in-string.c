#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100], t[100];
    int a, i, c = 0;
    char z;
    do
    {
        printf("----Menu---");
        printf("\n1:sub string");
        printf("\n2:character occurence");
        printf("\n3:exit");
        printf("\nEnter your choice :");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("\n enter string 1:");
            scanf("%s", str1);
            printf("\n enter string 2:");
            scanf("%s", str2);
            if (strstr(str1, str2) == NULL)
            {
                printf("\n second string is not a substring of first\n\n");
            }
            else
            {
                printf("\n second string is a substring of first\n\n");
            }
            break;

        case 2:
            printf("enter the string :");
            scanf("%s", t);
            printf("enter the character :");
            scanf("%s", &z);
            for (i = 0; t[i] != '\0'; i++)
            {
                if (z == t[i])
                {
                    c++;
                }
            }
            printf("\n number of occurences of '%c' is %d\n\n", z, c);
            break;

        case 3:
            exit(0);
            break;
        default:
            printf("\n not a valid choice \n");
        }
    } while (a != 3);

    return 0;
}