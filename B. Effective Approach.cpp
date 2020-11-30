#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,i,j,v,a;
int main()
{
    cin>>n;
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>a;
        auto it=lower_bound(v.begin(),v.end(),a);
        cout<<it-v.begin()+1<<endl;
        // cout<<v<<" "<<(n-v)<<endl;

    }
    return 0;
}
