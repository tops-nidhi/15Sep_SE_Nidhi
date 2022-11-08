#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter value of x and y:");
    scanf("%d%d",&x,&y);    
    if (! (x < 10 || y > 10))
        printf("\nTrue");

    else
        printf("\nFalse.");
}