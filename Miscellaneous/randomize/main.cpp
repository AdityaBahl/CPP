#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n=0,ch=0,num;
    do{
        cout<<"Enter number of random elements that u want!"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            num=rand()%100;
            cout<<num<<endl;
        }
        cout<<"Do you want to continue?(0 for exit)"<<endl;
        cin>>ch;
    }while(ch!=0);
    return 0;
}
