#include<stdio.h>
int fecto(int no)
{
	if (no <=1)
		return 1;
    return no*fecto(no-1);
}
int main()
{
    printf("\nVlaue of fecto is:%d",fecto(7));
    return 0;
}
