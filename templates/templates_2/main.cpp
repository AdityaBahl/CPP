//temp 2
#include <iostream>
using namespace std;
template <class t1, class t2>
float sum(t1 a, t2 b)
{
    return a+b;
}
//return_type func_name(parameter)
//{
// body;
// body;
//}
int main()
{
    int n,m;
    cin>>n>>m;
    cout << "int + int sum =  " <<sum(n,m)<< endl;
    cout << "float + float sum =  " <<sum(2.2,3.9)<< endl;
    cout << "int + float sum =  " <<sum(2,3.9)<< endl;
    cout << "float + int sum =  " <<sum(2.2,3)<< endl;
    return 0;
}
