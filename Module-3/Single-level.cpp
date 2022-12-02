#include<iostream>
using namespace std;
class A
{
public:
    int no;
    int getdata()
    {
        cout<<"enter the value of no:";
        cin>>no;
        return 0;
    }
};
class B : public A
{
public:
    int showdata()
    {
        cout<<"Value of no is:"<<no;
        return 0;
    }
};
int main(int argc, char const *argv[])
{
    B b1;   
    b1.getdata();
    b1.showdata();
    return 0;
}
