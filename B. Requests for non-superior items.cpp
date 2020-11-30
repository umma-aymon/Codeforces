#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,v,low;
vector<int>a;
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>v;
        a.push_back(v);
    }
    sort(a.begin(),a.end());
    for(int i=0; i<m; i++)
    {
        cin>>v;
        low=upper_bound(a.begin(),a.end(),v)-a.begin();
        cout<<low<<" ";
    }
    a.clear();
    return 0;
}
