#include<iostream>
#include<algorithm>
using namespace std;
void fun1(int x)
{
    cout << x << " ";
}
void fun2(int x)
{
    cin>>x;
}
struct Class1 // object type function
{
    void operator() (int x)
    {
        cout << x << " ";
    }
} obj1;
int main()
{
    int arr[] = {11, 21, 4, 13}, a[4]={1,2,3,4};
    for_each(arr, arr + 4, fun1);
    cout << endl;
    for_each(arr, arr + 4, obj1);
    cout<<endl;
    //for_each(a,a+4,fun2);
    cout<<a[0]<<" - "<<a[1]<<" - "<<a[2]<<" - "<<a[3]<<endl;
    for_each(a,a+4,fun1);
    return 0;
}
