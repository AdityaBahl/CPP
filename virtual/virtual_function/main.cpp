// a class which contains pure virtual functions is called abstract base class
#include <iostream>
using namespace std;
class shape                     //abstract base class
{
protected:
    float a,b;
public:
    void getdetail()
    {
        cin>>a>>b;
    }
    virtual float area()=0;    //pure virtual function(ALWAYS INITIALISED WITH 0)
};
class triangle:public shape
{
public:
     float area()
    {
        return 0.5*a*b;
    }
};
class rectangle:public shape
{
public:
    float area()
    {
        return a*b;
    }
};
int main()
{
    triangle t;
    t.getdetail();
    cout<<"Area of triangle :"<<t.area()<<endl;
    rectangle r;
    r.getdetail();
    cout<<"Area of Rectangle: "<<r.area()<<endl;
    return 0;
}
