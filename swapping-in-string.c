#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100], t[100];
    printf("enter the first string :");
    gets(str1);

    printf("enter the second string :");
    gets(str2);

    printf("string before swapping are :\n");
    printf("first string : %s\n",str1 );
    printf("second string : %s\n", str2); 

    strcpy(t, str1);
    strcpy(str1, str2);
    strcpy(str2, t);

    printf("after swapping :\n");
    printf("first string : %s\n", str1);
    printf("second string :%s\n", str2);

    return 0;
}