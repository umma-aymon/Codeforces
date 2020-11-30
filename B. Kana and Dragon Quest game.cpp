#include<bits/stdc++.h>
using namespace std;
int t,n,m;
double x;
int main()
{
    freopen("in.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m;
        while(n || m)
        {
            if(n)
                x=floor(x/2.0)+10.0,n--;
            if(m)
                x-=10.0,m--;
        }
        if(x<=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
