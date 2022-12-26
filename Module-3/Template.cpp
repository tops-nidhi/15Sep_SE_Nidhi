#include<iostream>
using namespace std;
template <class t>

t div(t a, t b)
{
    return a+b;
}
int main()
{
    cout<<endl<<div<int>(12.5,2.5);
    cout<<endl<<div<float>(12.5,2.5);
}