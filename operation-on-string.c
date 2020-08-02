#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[150], str2[150], t[100];
    int i, j=0, c;
    int l1, l2;
    do
    {
        printf("---Menu---");
        printf("\n1: length of string");
        printf("\n2: reverse of a string");
        printf("\n3: string concatenate");
        printf("\n4: copy of a string");
        printf("\n5: string comparision");
        printf("\n6: exit");
        printf("\n Enter your choice :");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\n enter the string 1:");
            scanf("%s", str1);
            printf("\n enter the string 2:");
            scanf("%s", str2);
            l1 = strlen(str1);
            l2 = strlen(str2);
            printf("lengths of string 1 and string 2 are : %d %d \n", l1, l2);
            break;

        case 2:
            printf("\n enter the string 1:");
            scanf("%s", str1);
            for (i = strlen(str1) - 1; i >= 0; i--)
            {
                t[j++] = str1[i];
            }
            printf("\n string after reverse : %s\n", t);
            break;

        case 3:
            printf("\n enter the first string :");
            scanf("%s", str1);
            printf("\n enter the second string :");
            scanf("%s", str2);

            strcat(str1, str2);
            printf("\n string after concatenation : %s\n", str1);
            break;

        case 4:
            printf("\n enter string 1:");
            scanf("%s", str1);
            printf("string before copying :%s\n", str1);

            strcpy(t, str1);
            printf("\n string after copying:\n string-2 %s\n", t);
            break;

        case 5:
            printf("enter the first string :\n");
            scanf("%s", str1);
            printf("\n enter the second string :\n");
            scanf("%s", str2);
            if (strcmp(str1, str2) == 0)
            {
                printf("\nstring are same\n");
            }
            else
            {
                printf("\n string are not same\n");
            }
            break;

        case 6:
            exit(0);
            break;
        default:
            printf("\n invalid input . please enter the valid input\n");
        }
    } while (c != 6);
    return 0;
}