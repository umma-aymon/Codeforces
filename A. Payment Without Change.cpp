#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,a,b,n,s,m;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>n>>s;
        m=s/n;
        if(m<a)
            m=m*n;
        else
            m=a*n;
        if(s-m<=b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
