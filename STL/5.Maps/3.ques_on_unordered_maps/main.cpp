// Given N strings, Q queues. In each query you are given a string print frequency of that string
// N<=10^6
//|S|<=100
// Q<=10^6
// counts number of strings in the map
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;
        m[s]++;
    }
    int q;
    cin >> q;
    for (auto pr : m)
        cout << pr.first << "  " << pr.second << endl;
    // while (q--)
    //{
    //     string s;
    //     cin >> s;
    //     cout << m[s] << endl;
    // }
    return 0;
}
