#include<stdio.h>
#include<string.h>

int main()
{
    char str[48], temp;
    int n,i,j;
    printf("enter the required string :");
    scanf("%s", str);

    n= strlen(str);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
                if(str[i]>str[j])
                {
                    temp= str[i];
                str[i] = str[j];
                str[j] = temp;
                }

        }
    }

    printf("\n sorted string is : %s", str);
    return 0;
}