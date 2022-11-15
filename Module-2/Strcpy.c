#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    printf("Enter your first string:");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("\nYour copied string is:%s",str2);
}