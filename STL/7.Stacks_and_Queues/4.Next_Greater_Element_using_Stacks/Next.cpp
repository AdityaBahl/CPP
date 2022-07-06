// next greater element using stacks
#include <bits/stdc++.h>
#define fio                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size(), -1);
    stack<int> st;

    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > st.top())
        {
            auto it = find(v.begin(), v.end(), st.top());
            int index = it - v.begin();
            nge[index] = v[i];
            st.pop();
        }
        st.push(v[i]);
    }
    while (!st.empty())
    {
        st.pop();
    }

    return nge;
}

int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> nge = NGE(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " << nge[i] << endl;
    }
    return 0;
}
