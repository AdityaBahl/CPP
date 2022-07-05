#include <bits/stdc++.h>        //multimap can store value even if repeated;
using namespace std;
int main()
{
    multimap<int, string> m;
    m[1]="abc";
    m[1]="adc";
    m[3]="lop";
    m[3]="xyz";
    m[2]="fgh";
    m[2]="def";
    //for(auto pr:m)
     //   cout<<pr.first<<"  "<<pr.second<<endl;
    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    cout<<it->first<< " "<<it->second<<endl;
    return 0;
}
