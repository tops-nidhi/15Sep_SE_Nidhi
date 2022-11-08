#include<stdio.h>
void main()
{
    char ch;
    int  ch2;
    printf("\nA.Case a\n\t1.Case1\n\t2.Case2\nB.Case B\nC.Case C\n\t1.Case1\n");
    printf("\nEnter your choice:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    printf("\nThis is case A.");
        printf("\nEnter your choice:");
        scanf("%d",&ch2);
        switch (ch2)
        {
        case 1:
            printf("\nThis is case 1.");
            break;
        
        case 2:
            printf("\nThis is case 2.");
            break;
        default:
            printf("\nEnter valid choice........");
            break;
        }
        break;
    case 'B':
        printf("\nThis is case B.");
        break;
    
    case 'C':
        printf("\nThis is case C.");
        printf("\nEnter your choice:");
        scanf("%d",&ch2);
        switch (ch2)
        {
        case 1:
            printf("\nThis is case 1.");
            break;
        
        default:
            printf("Enter valid choice........");
            break;
        }
        break;
            
    default:
            printf("Enter valid choice........");
        break;
    }
}