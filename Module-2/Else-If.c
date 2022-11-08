#include<stdio.h>
void main()
{
    int no;
    printf("enter no to check whther it's negative or positive:");
    scanf("%d",&no);
    if (no > 0)
    {
        printf("No is positive.");
    }
    else if (no == 0)
    {
        printf("\nNo is zero.");
    }
    
    else
    {
        printf("\nNo is negative.");
    }
}