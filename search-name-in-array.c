#include<stdio.h>
#include<string.h>

int main()
{
    char data[45][45], search[30];
    int i,n,c=0;
    printf("how many names you want to enter :");
    scanf("%d", &n);

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("enter name %d", i+1);
        scanf("%s", data[i]);
    }

    printf("\nelements present in 2d array: \n");
    for(i=0; i<n; i++)
    {
        printf("\t%s\n", data[i]);
    }
    printf("\n");


    printf("enter the name to be searched :");
    scanf("%s", search);

    for(i=0; i<n; i++)
    {
        if(strcmp(data[i], search)==0)
        {
             c=1;
            break;
        }
           
        


    }
    if(c==1)
    {
        printf("\n%s is found at  poistion : %d", data[i], i+1);
    }
    else
    {
        printf("\n%s is not found in above array ", data[i]);


    }
    return 0;
    
    
}