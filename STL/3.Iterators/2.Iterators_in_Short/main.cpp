#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v={2,4,6,8,10};
    for(int value:v)        //works in all containers not just vectors, in this case, this is a copy, not as it is
        cout<<value<<" ";
    cout<<endl;
    for(int &value:v)       //in this case, this is called by reference
    {
        value++;
        cout<<value<<" ";
    }
    cout<<endl;
    for(int value:v)        //this would reflect the changes done in 2nd comment
        cout<<value<<" ";
    cout<<endl;
    return 0;
}
