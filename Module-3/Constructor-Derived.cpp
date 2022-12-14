#include<iostream>
using namespace std;
class Perent
{
protected:
    Perent(int n){
        cout<<n<<endl;
    }
};
class Child : virtual Perent
{
public:
    Child(int no):Perent(no)
    {
        cout<<"This is constructor in derived class.";
    }
};
int main()
{
    Child c1(10);
}