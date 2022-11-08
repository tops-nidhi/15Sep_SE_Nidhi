#include<stdio.h>
void main()
{
    int a, n;
    float div;
    printf("Enter value of a and n:");
    scanf("%d%d",&a,&n);
    printf("\nAddion is:%d",a+n);
    printf("\nSunstraction is:%d",a-n);
    printf("\nMultpliction is:%d",a*n);
    div = a/n;
    printf("\nDivision is:%f",div);
    printf("\nModulo is:%d",a%n);
    a++;
    printf("\nAfter using increment operator value of a is:%d",a);
    --n;
    printf("\nAfter decrement operator value of n is:%d",n);
}