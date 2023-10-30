#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>arr;
    int ele;
    for(int i=1;i<=5;i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    display(arr);
}