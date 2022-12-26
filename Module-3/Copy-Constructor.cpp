#include<iostream>
using namespace std;
class Constructor
{
public:
    int no;
    Constructor(int n)
    {
        no = n;
    }
    Constructor(Constructor &c1)
    {
        no = c1.no;
    }
    int show()
    {
        return no;
    }
};
int main()
{
    Constructor con1(12);
    Constructor con2 = con1;
    cout<<con1.show();
    cout<<endl<<con2.show();
}