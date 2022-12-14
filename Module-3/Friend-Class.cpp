#include<iostream>
using namespace std;
class FriendClass
{
    int T;
public:
    friend class demoFriend;
};
class demoFriend
{
public:
    int data(FriendClass f1)
    {
        cout<<"Enter the value of no:";
        cin>>f1.T;
        cout<<"Value of no is:"<<f1.T;
        return 0;
    }
};
int main()
{
    FriendClass fn;
    demoFriend frnd;
    frnd.data(fn);
}