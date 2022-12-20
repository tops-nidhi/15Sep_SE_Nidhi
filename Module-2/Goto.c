#include<stdio.h>
void main()
{
    int i;
    int no;
    int flag = 0;
    printf("Enter no to check wether it's prime or not:");
    scanf("%d",&no);
    for ( i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            flag = 1;
            goto done;
        }
        
    }
    done:
        if(flag == 1)
            printf("%d is not prime no.",no);
        else
            printf("%d is prime no.",no);
}