#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v[10]; // 10 vectors of size 0
    vector<int> w[n];  // n vectors
    for (int i = 0; i < n; i++)
    {
        int N;
        cin >> N;
        for (int j = 0; j < N; j++)
        {
            int x;
            cin >> x;
            w[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> a = w[i];
        for (int j = 0; j < a.size(); j++)
            cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}
