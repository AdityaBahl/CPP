#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &s)
{
    for (string value : s)
        cout << value << endl; // to print
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << (*it) << endl;
}
int main()
{
    multiset<string> s; // allows us to store similar values multiple times
    s.insert("abc");    // to insert
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc"); // repeating elements will reflect
    s.insert("zsdf");
    s.insert("bcd");
    s.find("abc"); // to find
    // auto it=s.find("bcd");//to access
    // if(it!=s.end())
    //{
    //     cout<<(*it);      //print selected
    //     s.erase(it);      //to delete only one instance if multiple present
    // }
    // s.erase("abc");        //to delete all instances(in multiset only)
    print(s); // print all
    return 0;
}
