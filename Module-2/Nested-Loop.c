#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 1; i <= 5; i++) //working for Row
    {
        for ( j = 1; j <= i; j++) //Working for column
        {
            printf("%d ",j);
        }
        printf("\n"); 
    }
    
}