#include<iostream>
using namespace std;

class Construct
{
    public:
    int no;
    int get()
    {
        cout<<"Enter the value of no:";
        cin>>no;
        return no;
    }
    Construct operator -(Construct cn1)
    {
        Construct cn2;
        cn2.no = no - cn1.no;
        return cn2;
        
    }
    int data()
    {
        cout<<endl;
        cout<<"Value of no is:"<<no;
        return no;
    }
};
int main(int argc, char const *argv[])
{
    Construct con1,con2;
    con1.get();
    con2.get();
    con1.data();
    con2.data();
    Construct con3;
    con3 = con1 - con2;
    cout<<endl<<"After substrction:-\n";
    con3.data();
    return 0;
}
