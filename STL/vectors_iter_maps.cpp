//use of vectors,iterators,maps
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    //vector of int
    vector<int>vals;
    string ch="no";
    int count=0,x=0;
    while(ch!="yes"){
        cout<<"Enter Value no."<<count+1<<"\n";
        cin>>x;
        count++;
        vals.push_back(x);
        cout<<"To exit type yes.\n";
        cin>>ch;
    }
    //auto function and iterators
    for(auto &it:vals){
        cout<<it<<" ";
    }
    cout<<"\n";
    //vector of strings
    vector<string>strings;
    string chs="no",str;
    int counts=0;
    while(chs!="yes"){
        cout<<"Enter String no."<<counts+1<<"\n";
        cin>>str;
        counts++;
        strings.push_back(str);
        cout<<"To exit type yes.\n";
        cin>>chs;
    }
    //auto function and iterators
    for(auto &it:strings){
        cout<<it<<" ";
    }
    cout<<"\n";
    //maps
    map<int,string>m;
    for(int i=0;i<min(count,counts);i++){
        m.insert({vals[i],strings[i]});
    }
    map<int,string>::iterator iter;
    for(iter=m.begin();iter!=m.end();iter++){
        cout<<iter->first<<" "<<iter->second<<"\n";
    }
    cout<<"\n";
    return 0;
}