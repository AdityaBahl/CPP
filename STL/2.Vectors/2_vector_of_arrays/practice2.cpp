#include <iostream>
#include <vector>
using namespace std;
int printvect(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int y;
            cin >> y;
            v[i].push_back(y);
        }
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> a = v[i];
        printvect(a);
    }
    return 0;
}