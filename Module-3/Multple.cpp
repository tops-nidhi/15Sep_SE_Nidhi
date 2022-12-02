#include<iostream>
using namespace std;
class Nihar
{
public:
    int nid;
    string ncourse;
    int ngetdata()
    {
        cout<<"Enter your id:";
        cin>>nid;
        cout<<"enter your course name:";
        cin>>ncourse;
        return 0;
    }
};
class Niharika
{
public:
    int kid;
    string kcourse;
    int kgetdata()
    {
        cout<<"Enter your id:";
        cin>>kid;
        cout<<"Enter your course name:";
        cin>>kcourse;
        return 0;
    }
};
class Tops : public Nihar, public Niharika
{
public:
    int printdata()
    {
        cout<<"\n-------------Nihar-------------";
        cout<<endl<<"Id is:"<<nid;
        cout<<endl<<"Course name is:"<<ncourse;
        cout<<"\n---------------Niharika------------";
        cout<<endl<<"Id is:"<<kid;
        cout<<endl<<"Course name is:"<<kcourse;
        return 0;
    }
};
int main(int argc, char const *argv[])
{
    
    Tops t1;
    cout<<"\t\t\tEnter Data";
    cout<<"\n----------Nihar's Data------------"<<endl;    
    t1.ngetdata();
    cout<<"\n--------------Niharaka's Data-------------"<<endl;
    t1.kgetdata();
    cout<<"\n\t\t\t\tPrint Data";
    cout<<endl;
    t1.printdata();
    return 0;
}
