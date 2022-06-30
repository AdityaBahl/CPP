#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"base class constructor is called!"<<endl;
    }
    virtual ~base()     //virtual destructor called in the parent class
    {
        cout<<"base class destructor is called!"<<endl;
    }
};
class der1:public base
{
public:
    der1()
    {
        cout<<"Derived 1 constructor is called!"<<endl;
    }
    ~der1()
    {
        cout<<"Derived 1 destructor is called!"<<endl;
    }
};
class der2:public base
{
    public:
    der2()
    {
        cout<<"Derived 2 constructor is called!"<<endl;
    }
    ~der2()
    {
        cout<<"Derived 2 destructor is called!"<<endl;
    }
};
class child:public der1,public der2
{
    public:
    child()
    {
        cout<<"Child constructor is called!"<<endl;
    }
    ~child()
    {
        cout<<"Child destructor is called!"<<endl;
    }
};
int main()
{
    base *b=new der1;
    cout<<endl;
    base *c=new der2;
    cout<<endl;
    //base *d=new child;
    delete b;
    return 0;
}
