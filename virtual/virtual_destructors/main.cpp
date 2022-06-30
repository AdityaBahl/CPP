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
class der:public base
{
public:
    der()
    {
        cout<<"Derived constructor is called!"<<endl;
    }
    ~der()
    {
        cout<<"Derived destructor is called!"<<endl;
    }
};
int main()
{
    base *b=new der;
    delete b;
    return 0;
}
