#include<string.h>
#include<stdio.h>
void main()
{
    int len;
    char str1[20];
    printf("Enter any string:");
    scanf("%s",&str1);
    len = strlen(str1);
    printf("\nLength of the string is:%d",len);
}