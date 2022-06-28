//template 4
//imp
#include <iostream>
using namespace std;
template <class t>
class test
{
    t a,b;
public:
    void get()//def
    {
        cin>>a>>b;
    }
    t sum();//dec
};
template <class t>
t test<t> ::sum()
{
    return a+b;
}
int main()
{
    test <int>t1;
    test <float>t2;
    cout<<"Enter 2 integers: "<<endl;
    t1.get();
    cout<<"sum of integers is: "<<t1.sum()<<endl;
    cout<<"Enter 2 floats: "<<endl;
    t2.get();
    cout<<"sum of floats is: "<<t2.sum()<<endl;
    return 0;
}
