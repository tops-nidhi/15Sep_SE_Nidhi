#include<iostream>
using namespace std;
class Abstract
{
    int no;
public:
    int data()     
    {
        cout<<"enter the value of no:";
        cin>>no;
        cout<<endl<<"Value of no:"<<no;
        return 0;
    }
};
int main()
{
    Abstract abs;
    abs.data();

}