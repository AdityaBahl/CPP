#include <iostream>
#include <vector>
using namespace std;
int main()
{               //auto keyword automatically accepts any data, and act accordingly. mostly used alongside iterators to lessen the coding
    auto x=10.0/3.0;
    auto a=1;
    auto b="string";
    auto c=1.23;
    auto d='c';
    cout<<x<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    vector <int> v={1,2,3,4,5};
    vector <int> ::iterator it;     //traditional way of initialising iterators(pointers of vectors)
    for(it=v.begin();it!=v.end();it++)
        cout<<(*it)<<" ";
    // now iterators with auto    !!!!
    cout<<endl;
    for(auto itauto=v.begin();itauto!=v.end();itauto++)
        cout<<(*itauto)<<" ";
    cout<<endl;
    for(auto &value:v)
        value+=3;
    for(auto value:v)
        cout<<value<<" ";
    cout<<endl;
    return 0;
}
