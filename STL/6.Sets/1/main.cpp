#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for (string value : s)
        cout << value << endl; // to print
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << (*it) << endl;
}
int main()
{
    set<string> s;   // ordered set
    s.insert("abc"); // to insert
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc"); // repeating elements dont reflect
    s.insert("zsdf");
    s.insert("bcd");
    s.find("abc"); // to find
    // cout << endl;
    // auto it = s.find("bcd"); // to access
    // if (it != s.end())
    //{
    //     cout << (*it); // print selected
    //     s.erase(it);   // to delete
    // }
    //  s.erase("abc")        //alternate way to delete
    print(s); // print all
    // unordered_set<string> m;//unordered set, to check if something is present or no
    return 0;
}