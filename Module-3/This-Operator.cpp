#include<iostream>
using namespace std;
class  This
{
public:
    int no = 1000;
    int demothis()
    {
        int no = 10;
        cout<<"\nVlaue of local varibale no is:"<<no;
        cout<<endl<<"Value of data member is:"<<this->no;
        return 0;
    }
};
int main()
{
    This t1;
    t1.demothis();
    return 0;
}