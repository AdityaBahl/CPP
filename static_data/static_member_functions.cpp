#include <iostream>
using namespace std;
class test
{
public:
     static void read(int x,int y)
    {
        if(x>y)
            cout<<"x is big"<<endl;
        else if(y>x)
            cout<<"y is big "<<endl;
        else
            cout<<"Both are equal"<<endl;
    }
};
int main()
{
    test t1;
    t1.read(10,7);
    test::read(20,33);
    test::read(5,5);
    return 0;
}
