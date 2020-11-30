#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,n,t,i;
unsigned ll f(ll n)
{
    if(n==0)
        return a;
    else if(n==1)
        return b;
    else
        return f(n-1)^f(n-2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        cout<<f(n)<<endl;
    }
    return 0;
}
