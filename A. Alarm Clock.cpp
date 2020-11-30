#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t,a,b,c,d;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a<=b)
            cout<<b<<endl;
        else if(c<=d)
            cout<<-1<<endl;
        else
        {
            a=a-b;
            //cout<<a<<" ";
            d=c-d;
            double d2=ceil((double)a/d);
           // cout<<ceil(d2);
            ll ans=d2*c+b;
            cout<<ans<<endl;
        }
    }
    return 0;
}
