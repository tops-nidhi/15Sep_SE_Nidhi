#include<iostream>
using namespace std;
class Encap
{
    int no;
    string nm;
public: 
    int data()
    {
        cout<<"Enter your id no:";
        cin>>no;
        cout<<"Enter your name:";
        cin>>nm;
        cout<<"Your id no is:"<<no<<" and your name is:"<<nm;
        return 0;
    }

};
int main()
{
    Encap en;
    en.data();
}