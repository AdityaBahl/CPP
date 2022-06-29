#include <iostream>
using namespace std;
int main()
{
    int n,j=1,i;
    float m=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(;j<=(m*i);j=j+1)
        {
            if(j<=(m*i))
            {
                cout<<j<<" ";
            }
            else
            break;
        }
        m=m+0.5;
        cout<<endl;
    }
    return 0;
}
/*
Also Called FLOYD's TRIANGLE
Output: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
