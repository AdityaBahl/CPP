//temp 3
#include <iostream>
using namespace std;
template <class t>
t sum(t a[], int siz)
{
    t s=0;
    for(int i=0;i<siz;i++)
    {
        s=s+a[i];
    }
    return s;
}
int main()
{
    int x[5]={1,2,3,4,5};
    float y[3]={1.1,2.2,3.3};
    cout << "Int sum: "<<sum(x,5)<< endl;
    cout << "Float sum: "<<sum(y,3)<< endl;
    return 0;
}
