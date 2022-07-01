// this is the first file
#include <iostream>
#include <map>
using namespace std; // keys are stored in sorted order of their keys
int main()           // all keys should be unique
{                    // if key repeated, latest value will be kept, others replaced
    map<int, string> m;
    m[1] = "abc"; // O(log(n)) time complexity
    m[5] = "cdb";
    m[3] = "adc";
    m.insert({4, "afg"}); // alternate way to input value in map
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl;
    cout << endl;
    // cout<<m.first<<"  "<<m.second;
    for (auto &pr : m)
        cout << pr.first << " " << pr.second << endl;
    auto iter = m.find(5); // to find a value(by key)
    if (iter == m.end())
        cout << "No Value" << endl;
    else
        cout << iter->first << " " << iter->second << "\n";
    cout << endl;
    m.erase(1); // to delete
    iter = m.find(3);
    m.erase(iter); // alternate way to delete
    for (it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl;
    m.clear(); // to delete the map
    return 0;
}
