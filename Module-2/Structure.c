#include<stdio.h>
struct Structure
{
    int id;
    char nm[20];
}obj;
int main()
{
    // struct Structure obj;
    printf("Enter the id of student:");
    scanf("%d",&obj.id);
    printf("Enter the name of student:");
    scanf("%s",&obj.nm);
    printf("Your student id is:%d and name is:%s",obj.id,obj.nm);
    return 0;
}
