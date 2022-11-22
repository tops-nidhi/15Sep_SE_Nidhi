#include<stdio.h>
int data(int *ptr)
{
    printf("Address of varible is:%d",*ptr);
    return 0;
}
int main()
{
    int a=10;
    // int *ptr;
    // ptr=&a;

    data(&a);
    return 0;
}