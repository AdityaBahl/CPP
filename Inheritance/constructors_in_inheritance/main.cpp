#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"Constructor in class base!"<<endl;
    }
    ~base()
    {
        cout<<"Destructor in class base!"<<endl;
    }
};
class yo
{
public:
    yo()
    {
        cout<<"Constructor in class yo!"<<endl;
    }
    ~yo()
    {
        cout<<"Destructor in class yo!"<<endl;
    }
};
class derived:public base,public yo
{
public:
    derived()
    {
        cout<<"Constructor in class derived!"<<endl;
    }
    ~derived()
    {
        cout<<"Destructor in class derived!"<<endl;
    }
};
int main()
{
    derived d;
    return 0;
}
