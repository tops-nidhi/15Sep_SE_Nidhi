#include<iostream>
using namespace std;
class Get{
public:
    int a;
    int b;
    int getdata()
    {
        cout<<"Enter the value of a and b:";
        cin>>a>>b;
        return 0;
    }
};
class Add : public Get
{
public:
    int add()
    {
        return a + b;
    }
};
class Sub : public Get
{
public:
    int sub()
    {
        return a - b;
    }
};
class Mul : public Get
{
public:
    int mul()
    {
        return a * b;
    }
};
class Div : public Get
{
public:
    int div()
    {
        return a / b;
    }
};
int main()
{
    Add a1;
    Sub s1;
    Mul m1;
    Div d1;
    int expression;
    cout<<"\n1.Add\n2.Sub\n3.Mul\n4.Div\n";
    cout<<"Enter your choice:";
    cin>>expression;
    switch (expression)
    {
    case 1:
        a1.getdata();
        cout<<a1.add();
        break;
    case 2:
        s1.getdata();
        cout<<s1.sub();
        
        break;
    case 3:
        m1.getdata();
        cout<<m1.mul();
        
        break;
    case 4:
        d1.getdata();
        cout<<d1.div();
        
        break;
    
    default:
        cout<<"\nEnter your valid choice.............";
        break;
    }
    return 0;
}