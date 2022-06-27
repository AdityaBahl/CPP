#include <iostream>
using namespace std;
class student
{
    protected:
    int id;
    char name[20];
public:
    void getst()
    {
        cout<<"Enter Student ID and Name: "<<endl;
        cin>>id;
        cin.getline(name,20);
        gets(name);
    }
    void putst()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class marks:public student
{
    protected:
    int m1,m2,m3;
    public:
        void getmarks()
        {
            cout<<"Enter Marks for "<<name<<": "<<endl;
            cin>>m1>>m2>>m3;
        }
        void putmarks()
        {
            cout<<"Marks for Subject 1 "<<name<<": "<<m1<<endl;
            cout<<"Marks for Subject 2 "<<name<<": "<<m2<<endl;
            cout<<"Marks for Subject 3 "<<name<<": "<<m3<<endl;
        }
};
class result:public marks
{
    int sum=0;
    float avg=0;
    public:
    void show()
    {
        sum=m1+m2+m3;
        avg=sum/3.0;
        cout<<"Sum is: "<<sum<<endl;
        cout<<"Avg is: "<<avg<<endl;
    }
};
int main()
{
    result r;
    r.getst();
    r.getmarks();
    cout<<endl<<"Displaying: "<<endl;
    r.putst();
    r.putmarks();
    r.show();
    return 0;
}
