#include<iostream>
using namespace std;
template <typename T>
class Template
{

public:
    T n1, n2;
    Template(T n1, T n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }
    T div()
    {
        return n1/n2;
    }
};
int main()
{
    int n1,n2;
    cout<<"Enter the value of a and b:";
    cin>>n1>>n2;
    Template <int> t1(n1,n2);
    cout<<t1.div();

    float n3,n4;
    cout<<"\nEnter the value of a and b:";
    cin>>n3>>n4;
    Template <float> t2(n3,n4);
    cout<<endl<<t2.div();

    return 0;
}
