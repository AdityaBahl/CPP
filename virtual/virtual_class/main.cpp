//virtual class
#include <iostream>
using namespace std;
class all
{
public:
    int a;
    all()
    {
        a=10;
        cout<<a<<endl;
       // b=20;
    }
};
class b:public virtual all
{
public:
    b()
    {
        a=a*2;
        cout<<a<<endl;
    }
};
class c:public virtual all
{
public:
    c()
    {
        //a=30;
        cout<<a<<endl;
    }
};
class don:public b,public c
{
public:
    don()
    {
        a=a*3;
        cout<<a<<endl;
    }
};
int main()
{
    don d;
    //cout<<d.a<<endl;
    return 0;
}
