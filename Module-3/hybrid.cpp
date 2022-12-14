#include<iostream>
using namespace std;

class A{
public:
    A()
    {
        cout<<"This is class A."<<endl;  
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout<<"This is class B."<<endl;
    }
};
class C : virtual public A{
public:
    C()
    {
        cout<<"This is class C."<<endl;
    }    
};
class D : public B, public C{
public:
    D()
    {
        cout<<"This is class D.";
    }
};
int main()
{
    D d1;
    return 0;
}