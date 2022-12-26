#include<iostream>
using namespace std;
class Virtual{
public:
int a,b;
    virtual int mul()
    {
        cout<<"Enter the value of a and b:";
        cin>>a>>b;
        cout<<"Multiplication of a nd b is:"<<a*b;
        return 0;
    }
    // virtual int data() = 0;
};
int main(int argc, char const *argv[])
{
    Virtual vir;
    vir.mul();

    return 0;
}
