#include<iostream>
using namespace std;
class Grand
{
private:
    /* data */
public:
    Grand() 
    {
        // int id;
        // cout<<"Enter the value of id:";
        // cin>>id;
        // cout<<"\nValue of id is:"<<id;
        cout<<"This is grand constructor."<<endl;
    }
    ~Grand() {
        cout<<"This is destructor.";
    }
};
class Perent : public Grand
{
private:
    /* data */
public:
    Perent(/* args */) {
        cout<<"\nThis is Perent class.";
    }
};
class Child : public Perent
{
private:
    /* data */
public:
    Child(/* args */) {
        cout<<"\nThis is child class.";
    }
};
int main()
{
    Child c1;
    return 0;
}