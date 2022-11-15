#include<stdio.h>
#include<string.h>
void main()
{
    int cmp;
    char str1[20],str2[20];
    printf("Enter any 2 string to check max string:");
    scanf("%s%s",&str1,&str2);
    cmp=strcmp(str1,str2);
    // printf("Max string is:%d",cmp);
    if (cmp > 0)
    {
        printf("\n%s is max string.",str1);
    }
    else if (cmp == 0)
    {
        printf("\nBoth string are equle.");
    }
    
    else
    {
        printf("\n%s is max string.",str2);
    }
    
}