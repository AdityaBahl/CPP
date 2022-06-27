#include <iostream>
using namespace std;
class base
{
    int id;
    char name[10];
public:
    void getbase()
    {
        cout<<"Enter Student ID, Name: "<<endl;
        cin>>id>>name;
    }
    void putbase()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class derived:public base
{
    float h,w;
public:
    getbase();
    void getder()
    {
        cout<<"Enter Height and Weight: "<<endl;
        cin>>h>>w;
    }
    void putder()
    {
        cout<<"Height: "<<h<<endl;
        cout<<"Weight: "<<w<<endl;
    }
};
int main()
{
    derived p;
    p.getder();
    p.getbase();
    cout<<"Information Entered: "<<endl;
    p.putder();
    p.putbase();
    return 0;
}
