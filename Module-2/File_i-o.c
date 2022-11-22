#include<stdio.h>
int main()
{
    char str[20];
    FILE *fptr;
    fptr = fopen("D:/nidhi batch/15sep_SE/module-2/hello.txt","w");
    fprintf(fptr,"Hello");
    fclose(fptr);
    fptr = fopen("D:/nidhi batch/15sep_SE/module-2/hello.txt","r");
    fscanf(fptr,"%s",&str);
    printf("%s",str);
    fclose(fptr);
}