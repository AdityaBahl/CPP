// vector of pair
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Size is: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << "," << v[i].second << "\n";
    return 0;
}
