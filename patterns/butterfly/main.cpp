#include <iostream>
using namespace std;
int main()
{
    int n,m,j,i,cnt=1;
    cin>>n;
    m=n*2;
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
    {
        if(j<=n)
            cnt++;
        if(j )
        {
            cout<<" ";
        }
        else
            cout<<"*";
    }
    return 0;
}
/*
Output: 4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
