#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    a += b;
    printf("\nValue of a is:%d",a);
    a *= b;
    printf("\nValue of a is:%d",a);
    b -= a;
    printf("\nValue of b is:%d",b);
}