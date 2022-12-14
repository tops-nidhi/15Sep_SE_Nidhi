#include<iostream>
using namespace std;
int no = 1000;
int main(int argc, char const *argv[])
{
    int no = 10;
    cout<<"\nValue of local variable no is:"<<no;
    cout<<endl<<"Value of global varible no is:"<<::no;
    return 0;
} 