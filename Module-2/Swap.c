#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter value:");
    scanf("%d%d",&a,&b);
    printf("\nBefore value swapping value of a is:%d and b is:%d",a,b);
    //a = 5; b = 10;
    c = a;//c = 5;
    a = b;// a = 10;
    b = c;// b = 5;
    printf("\nAfter value swapping value of a is:%d and b is:%d",a,b);
}