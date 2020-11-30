#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int n,i,v;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v;
        m[v]=i;
    }
    for(auto i:m)
        cout<<i.second<<" ";
    return 0;
}
