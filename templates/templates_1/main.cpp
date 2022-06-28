//temp 1
#include <iostream>
using namespace std;
template <class t>
t sum(t a, t b)
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
    cout << "int sum =  " <<sum(n,m)<< endl;
    return 0;
}
