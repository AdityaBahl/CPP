#include <iostream>
using namespace std;
class test
{
public:
    static int a; //declaration of a
    void get()
    {
        cout<<"a: "<<a<<endl;
        a=10;
    }
};
int test::a;
int main()
{
    test b;
    test::a=100;
    b.get();
    cout<<test::a;
    return  0;
}
