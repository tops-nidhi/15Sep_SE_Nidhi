#include<iostream>
using namespace std;
class Poly
{
public:
    inline int add(int a, int b)
    {
        return a+b;
    }
    int add(int a, int b, int c)
    {
        return a+b+c;
    }
};
int main(int argc, char const *argv[])
{
    Poly p1;
    cout<<p1.add(12,23);
    cout<<endl<<p1.add(12,23,20);
    return 0;
}
