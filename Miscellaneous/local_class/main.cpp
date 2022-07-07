#include <iostream>
using namespace std;
int x=200;
void classfunc()
{
    int x=150;
    class test
    {
        int x;
    public:
        void show()
        {
            x=100;
            cout<<"local x: "<<this->x<<endl;
            cout<<"global x: "<<::x<<endl;
        }
    };
    test t;     //object declared
    t.show();   //calling test class
}
int main()
{
    classfunc();
    return 0;
}
