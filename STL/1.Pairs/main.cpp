// This program teaches pair and swap function;
#include <iostream>
using namespace std;
int main()
{
    pair<int, int> a;
    a = make_pair(1, 2);                                                   // method 1
    cout << a.first << " is the first " << a.second << " is the second\n"; // called by .first or .second
    pair<float, int> b;
    b = {4.567, 2}; // method 2
    cout << b.first << " is the first " << b.second << " is the second\n";
    pair<int, string> c;
    cin >> c.first >> c.second;
    cout << c.first << " is the first " << c.second << " is the second\n";
    pair<string, double> d;
    cin >> d.first >> d.second;
    cout << d.first << " is the first " << d.second << " is the second\n";
    pair<int, int> arr[3];
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[i] = {x, y};
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    swap(arr[0], arr[2]);
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    return 0;
}
