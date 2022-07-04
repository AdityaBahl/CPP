// array of vector of pair
#include <iostream>
#include <vector>
using namespace std;
void printvect(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << "," << v[i].second << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int p, q;
            cin >> p >> q;
            a[i].push_back({p, q});
        }
    }
    for (int i = 0; i < n; i++)
    {
        vector<pair<int, int>> temp = a[i];
        printvect(temp);
    }
    return 0;
}