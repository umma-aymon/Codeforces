#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll mx=1e18+1,s,e,m,a,i,t,x,y,l,r,cnt;
vector<ll>v;
ll mysqrt(ll x)
{
    ll s=1,e=1e9,a=0;
    while(s<=e)
    {
        ll m=(s+e)/2;
        if(m*m<=x)
        {
            a=m;
            s=m+1;
        }
        else
            e=m-1;
    }
    return a;
}
int main()
{
    for(i=2; i<=1e6+1; i++)
    {
        x=i*i*i;
        while(1)
        {
            y=mysqrt(x);
            if(y*y!=x)
                v.pb(x);
            if(x>mx/i)
                break;
            x=x*i;
        }
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        cnt=mysqrt(r)-mysqrt(l-1);
        cnt+=(upper_bound(v.begin(),v.end(),r)-lower_bound(v.begin(),v.end(),l));
        cout<<cnt<<endl;
    }
    /*for(int i=0; i<100; i++)
        cout<<v[i]<<" ";*/
    return 0;
}
