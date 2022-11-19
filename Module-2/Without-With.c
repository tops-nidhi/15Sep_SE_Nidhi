#include<stdio.h>
void data(int no)// call by value
{
    printf("Value of no is:%d",no);
}
void main()
{
    int no;
    printf("Enter value of no:");
    scanf("%d",&no);
    data(no);
}