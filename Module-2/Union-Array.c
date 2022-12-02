#include<stdio.h>
union Disha
{
    int id;
    char nm[20];
};
int main()
{
    union Disha obj[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the id of student:");
        scanf("%d",&obj[i].id);
        printf("Enter the name of student:");
        scanf("%s",&obj[i].nm);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\nYour student id is:%d and name is:%s",obj[i].id,obj[i].nm);
    }
    return 0;
}
