#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i>=1&&i<=3&&j>=1&&j<=2)
            {
                cout<<"  ";
            }
            else
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}
