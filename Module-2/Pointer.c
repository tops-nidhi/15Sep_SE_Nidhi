#include<stdio.h>
void main()
{
    int a=100;
    int *ptr;
    ptr = &a;
    // printf("\nAddress of the a is:%d",ptr);
    // ++ptr;
    // printf("\nAfter increment address is:%d",ptr);
    // printf("\nValue of a is:%d",*ptr);
    *ptr = 13;
    printf("\nValue of a is:%d",a);
    ++*ptr;
    printf("\nValue of A is:%d",a);
    
}