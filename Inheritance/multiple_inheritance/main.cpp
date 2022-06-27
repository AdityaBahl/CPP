#include <iostream>
using namespace std;
class student
{
    int id;
    char name[20];
public:
    void getstu()
    {
        cout<<"Enter student ID"<<endl;
        cin>>id;
        cout<<"Enter Student Name"<<endl;
        cin>>name;
    }
    void putstu()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class marks
{
    protected:
    int m1,m2,m3;
public:
    void getmarks()
    {
        cout<<"Enter 3 subjects marks"<<endl;
        cin>>m1>>m2>>m3;
    }
    void putmarks()
    {
        cout<<"M1: "<<m1<<endl;
        cout<<"M2: "<<m2<<endl;
        cout<<"M3: "<<m3<<endl;
    }
};
class result:public student,public marks
{
    int tot;
    float avg;
public:
    void show()
    {
        tot=m1+m2+m3;
        avg=tot/3.0;
        cout<<"total = "<<tot<<endl;
        cout<<"average = "<<avg<<endl;
    }
};
int main()
{
    result r;
    r.getstu();
    r.getmarks();
    cout<<endl<<"Displaying the input:"<<endl;
    r.putstu();
    r.putmarks();
    r.show();
    return 0;
}
