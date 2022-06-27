#include <iostream>
using namespace std;
class parent
{
protected:
    int a,b;
public:
    void getpar()
    {
        cout<<"Enter a: "<<endl;
        cin>>a;
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
    void putpar()
    {
        cout<<"a is: "<<endl;
        cout<<"b is: "<<endl;
    }
};
class inter1:public parent
{
protected:
    int c,d;
public:
    void putint1()
    {
        c=a+10;
        d=b+10;
        cout<<"c=a+10: "<<c<<endl;
        cout<<"d=b+10: "<<d<<endl;
    }
};
class inter2:public parent
{
protected:
    int e,f;
public:
    void putint1()
    {
        e=a+20;
        f=b+20;
        cout<<"e: "<<e<<endl;
        cout<<"f: "<<f<<endl;
    }
};
class base:public inter1,public inter2
{
public:
    void showbase()
    {
        cout<<"c+d="<<c+d<<endl;
        cout<<"e+f="<<e+f<<endl;
        cout<<"c+e="<<c+e<<endl;
        cout<<"d+f="<<d+f<<endl;
        cout<<"c+f="<<c+f<<endl;
        cout<<"e+d="<<e+d<<endl;
    }
};
int main()
{

    cout << "Hello world!" << endl;
    return 0;
}
