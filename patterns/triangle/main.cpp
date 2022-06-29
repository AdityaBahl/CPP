#include <iostream>
using namespace std;
int main()
{
    int c;
    cin>>c;
    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=c;j++)
    {
        if(j<=c-i)
        cout<<" ";
        else
            cout<<"*";
    }
    cout<< endl;
    }
    return 0;
}
