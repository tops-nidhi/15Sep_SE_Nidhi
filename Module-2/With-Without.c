#include<stdio.h>
int no; //global varible
int getdata()
{
    printf("Enter no:");
    scanf("%d",&no);
    return 0;
}
int showdata()
{
    return no;
}
int main()
{
    getdata();
    printf("\nValue of no is:%d",showdata());
    return 0;
}