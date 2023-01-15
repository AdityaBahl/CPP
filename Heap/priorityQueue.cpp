#include <queue>
#include <iostream>
using namespace std;
void print(auto heap)
{
    while (!heap.empty())
    {
        cout << heap.top() << " ";
        heap.pop();
    }
    cout << endl;
}
void insert(auto &heap)
{
    heap.push(4);
    heap.push(2);
    heap.push(5);
    heap.push(1);
    heap.push(3);
}
int main()
{
    priority_queue<int> maxheap; // max heap by default
    insert(maxheap);
    print(maxheap);
    priority_queue<int, vector<int>, greater<int>> minheap; // min heap syntax
    insert(minheap);
    print(minheap);
    return 0;
}