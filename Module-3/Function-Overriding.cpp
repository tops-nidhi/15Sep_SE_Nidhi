#include<iostream>
using namespace std;
class Poly
{
public:
    int data(int no)
    {
        cout<<"This is the "<<no<<"st data function.";
        return 0;
    }
};
class Demo
{
public:
    int data(int no)
    {
        cout<<"\nThis is the "<<no<<"nd data function.";
        return 0;
    }
};
int main()
{
    Poly p1;
    Demo d1;
    p1.data(1);
    d1.data(2);
    return 0;
}
