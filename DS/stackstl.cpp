#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>stack;
    stack.push(12);
    stack.push(33);
    stack.push(55);
    while(!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
}