#include<stdio.h>
#define pi 3.14
void main()
{
    float r,ans;
    printf("Enter the redious the circle:");
    scanf("%f",&r);
    ans = pi* r*r;
    printf("\nArea of the circle is:%f",ans);
}