#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,3,5,7,9};
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    vector<int> ::iterator it=v.begin();
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;
    //it++ -> moves to next iterator
    //it+1 -> moves to next location
    // difference only felt in dynamic memory stuff like maps, where next location is garbage
    cout<<"Now Iterators with Vectors of pair"<<endl;
    vector<pair<int,int>> x={{1,2},{3,4},{5,6},{7,8}};//,::iterator itx;
    vector<pair<int,int>> ::iterator itx=x.begin();
    for(itx=x.begin();itx!=x.end();itx++)
        //cout<<(*itx).first<<"  "<<(*itx).second<<endl;
        cout<<itx->first<<"  "<<itx->second<<endl;//alternately with arrow too
    return 0;
}