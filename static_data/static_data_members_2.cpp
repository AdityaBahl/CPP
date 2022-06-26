#include <iostream>
using namespace std;
class sample
{
public:
    static int coun;
    sample()
    {
        coun=1;
        cout<<coun<<" obj is created"<<endl;
    }
    ~sample()
    {
        cout<<coun<<" obj deleted"<<endl;
        coun--;
    }
};
int main()
{
    sample s1,s2,s3;
    sample::coun==0;
    cout << "Hello world!" << endl;
    return 0;
}
