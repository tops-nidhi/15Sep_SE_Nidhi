#include<iostream>
using namespace std;

class Stdata
{
public:
    int no;
    int getdata()
    {
        cout<<"Enter the value of no:";
        cin>>no;
        return 0;
    }
    int showdata()
    {
        cout<<"\nThe value of no is:"<<no;
        return 0;
    }
};

int main()
{
    Stdata ST;
    ST.getdata();   
    ST.showdata();
    return 0;
}