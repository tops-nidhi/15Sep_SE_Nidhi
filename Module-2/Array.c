#include<stdio.h>
void main()
{
    int a[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\nA[%d]:",i);
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nA[%d]:\t%d",i,a[i]);
    }
    
}