#include<stdio.h>
#include<string.h>
void main()
{
    char fnm[20],lnm[20];
    printf("Enter your first name:");
    scanf("%s",&fnm);
    printf("\nEnter your last name:");
    scanf("%s",&lnm);
    strcat(fnm,lnm);
    printf("\nYour full name is:%s",fnm);
}