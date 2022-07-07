#include <iostream>
using namespace std;
class test
{
public:
    int id;
    char name[20];
    void gettest();
    void puttest();
};
void test::gettest()
{
    cout<<"Enter ID: "<<endl;
    cin>>id;
    cout<<"Enter Name: "<<endl;
    cin>>name;
}
void test::puttest()
{
    cout<<"ID : "<<id<<endl<<"Name : "<<name<<endl;
}
int main()
{
    test t[60];
    int i,n;
    cout<<"Enter No of students(0 to 60)"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        t[i].gettest();
        cout<<endl;
    }
    cout<<endl<<"Display:"<<endl;
       for(i=0;i<n;i++)
    {
        t[i].puttest();
        cout<<endl;
    }
    return 0;
}
