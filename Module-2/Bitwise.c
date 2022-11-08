#include<stdio.h>
void main()
{
    int a , b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nBitwise AND of A and B is:%d",a&b);
    printf("\nBitwise OR of A and B is:%d",a|b);
    printf("\nBiwise exclusive or of A nad B is:%d",a^b);
    printf("\nBitwise Compliment of A is:%d",~a);
    printf("\nBitiwse 1 Shift left of A is:%d",a<<1);
    printf("\nBitwise 1 Shift right of B is:%d",b>>1);
}