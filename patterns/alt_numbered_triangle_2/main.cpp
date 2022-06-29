// this is an alternate version of numbered triangle 2
#include <iostream>
using namespace std;
int main()
{
    int i, j, n, cnt = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}
/*
Output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
