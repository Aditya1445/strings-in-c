#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], s1[100],t[100];
    
    int i;
    printf("enter the string :");
    gets(s); 
    strcpy(s1, s);
    int j=0;
    for(i= strlen(s)-1; i>=0; i--)
    {
        t[j++] = s[i];
    }
    printf("\n string after reversing : %s", t);
    if(strcmp(s1,t)==0)
    {
    	printf("\n %s is palindrome ", t);
    	
	}
	else
	printf("\n %s is not palindrome ", t);
    return 0;
}