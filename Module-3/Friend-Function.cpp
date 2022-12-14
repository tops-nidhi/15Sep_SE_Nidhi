#include<iostream>
using namespace std;
class Friend
{
    int no;
public:
    friend int data(Friend &f1);
};
int data(Friend &f1)
{
    cout<<"Enter the value of no:";
    cin>>f1.no;
    cout<<"Value of no is:"<<f1.no;
    return 0;
}
int main()
{
    Friend frnd;
    data(frnd);
}