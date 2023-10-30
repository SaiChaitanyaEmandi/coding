#include<bits/stdc++.h>
using namespace std;
void print(queue<int>qu)
{
    queue<int>q=qu;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main()
{
    queue<int> qu;
    qu.push(18);
    qu.push(36);
    qu.push(54);
    qu.push(72);
    print(qu);
    qu.pop();
   
    cout<<endl;
    cout<<qu.size()<<endl;
    cout<<qu.front()<<endl;
    cout<<qu.back();
}
