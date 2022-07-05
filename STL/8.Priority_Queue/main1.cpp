#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void showpq(priority_queue<int> pq)
{
    priority_queue<int> newpq = pq;
    while (!newpq.empty())
    {
        cout << newpq.top() << ", ";
        newpq.pop();
    }
    cout << "\n";
}
int main()
{
    priority_queue<int> pq;
    cout << "The Vector before pq was:\n";
    vector<int> vec = {10, 5, 15, 2, 1, 9, 50};
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ", ";
        pq.push(vec[i]);
    }
    cout << "\nThe Priority Queue is: \n";
    showpq(pq);
    cout << "The vector is in non decreasing order now!";
}