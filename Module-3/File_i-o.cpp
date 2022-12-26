#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string str,str2;
    cout<<"Enter your string:";
    cin>>str2;
    ofstream out;
    out.open("D:/Nidhi batch/Software Engineering/15Sep_SE/Module-3/hello.txt");
    out<<str2;
    out.close();
    ifstream in("D:/Nidhi batch/Software Engineering/15Sep_SE/Module-3/hello.txt");
    in>>str;
    cout<<str;
    return 0;
}
