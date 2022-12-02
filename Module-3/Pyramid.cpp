#include <iostream>
using namespace std;

int main()
{
    int i,j,k, no;
    no = 5;
    for(i = 0; i < 5; i++)
    {
        for (k = 0; k < no; k++)
        {
            cout<<" ";
        }
        for (j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        no--;
        cout<<endl;
    }
    return 0; 
}