#include <iostream>
#include <vector>
using namespace std;
int printvect(vector <int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main()
{
    vector<int> a(10, 4);       //has 10 elements of value 4
    vector<int> b=a;        //a is copied in b, time complexity O(n)
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    printvect(v);
    cout<<endl;
    printvect(b);
    cout<<endl;
    printvect(a);
    vector<int> &d=a;       //Taken by reference, hence representing any and every changes in the original vector a, even after declaration.
    a.push_back(5);
    printvect(d);
    vector <string> y;
    int num;cin>>num;
    for(int i=0;i<num;i++)
    {
        string k;
        cin>>k;
        y.push_back(k);
    }
    for(int i=0;i<y.size();i++)
        cout<<y[i]<<" ";
    //some examples of different uses of vectors
    //vector <double> x;
    //vector <string> y;
    //vector <pair<int,int>> z;
    return 0;
}
