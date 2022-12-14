#include<iostream>
using namespace std;
class Constructor{
public:
    Constructor(int no)
    {
        cout<<"Value of no is:"<<no;
    }
};
int main()
{
    Constructor cn(20);
}