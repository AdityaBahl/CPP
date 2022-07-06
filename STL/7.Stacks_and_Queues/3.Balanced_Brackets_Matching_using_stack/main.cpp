#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;cin>>n;
    char a;
    stack<char> s;
    while(n--)
    {
        cin>>a;
        if(a=='(')
            s.push(a);
        else if(a==')')
            s.pop();
        else
            cout<<a<<" is invalid form\n";
    }cout<<s.size();
    return 0;
}
