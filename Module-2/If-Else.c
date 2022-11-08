#include<stdio.h>
void main()
{
    int age;
    printf("\nEnter your age:");
    scanf("%d",&age);
    if ( age >= 18 )
    {
        printf("\nElligible for vote.");
    }
    else
    {
        printf("\nNot ellible for vote.");
    }
}