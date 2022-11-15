#include<stdio.h>
int a;//global variable
void getdata()
{
    // int a;//local variable
    printf("Enter the value of a:");
    scanf("%d",&a);  
}
void showdata()
{
    printf("\nValue of a is:%d",a);
}
void main()
{
    getdata();
    showdata();
}