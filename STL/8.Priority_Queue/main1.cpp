#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    priority_queue<int> pq;
    cout << "The Vector before pq was:";
    vector<int> vec = {10, 5, 15, 2, 1, 9, 50};
    for (int i = 0; i < vec.size(); i++)
    {
        pq.push(vec[i]);
    }
    cout << "The Priority Queue is: ";
}