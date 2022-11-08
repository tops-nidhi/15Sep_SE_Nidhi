#include<stdio.h>
void main()
{
    float a, b;
    int expression;
    printf("Enter 2 no:");
    scanf("%f%f",&a,&b);
    printf("\n1.Addition\n2.Substraction\n3.Multipliction\n4.division\n");
    printf("\nEnter your choice:");
    scanf("%d",&expression);
    switch (expression)
    {
    case 1:
        printf("\nAdditon is:%f",a+b);
        break;
    case 2:
        printf("\nSubstraction is:%f",a-b);
        break;
    case 3:
        printf("\nMultiplication is:%f",a*b);
        break;
    case 4:
        printf("\nDivision is:%f",a/b);
        break;
    default:
        printf("\nEnter valid choice........");
        break;
    }
}