#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){ cin>>arr[i];}
    int cumsum[n+1];
    cumsum[0]=0;
    for(int i=1;i<=n;i++)
    {
        cumsum[i]=cumsum[i-1]+arr[i-1];
    }
    int c=0;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=cumsum[i]-cumsum[j];
            if(sum==k)
                c++;
        }
    }
    cout<<c;
}

