#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll s=n*(n+1)/2;
        for(ll j=1; j<=n; j=j*2)
            s-=2*j;
        cout<<s<<endl;
    }
    return 0;
}

