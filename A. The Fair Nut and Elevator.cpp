#include<bits/stdc++.h>
using namespace std;
int n,a[110],x,mx,i,ans=INT_MAX,d;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(x=1; x<=n; x++)
    {
        for(i=1; i<=n; i++)
            d+=(((abs(x-i)+abs(i-1)+abs(x-1))*2)*a[i]);
        ans=min(ans,d);
        d=0;
        // cout<<d<<" ";
    }
    cout<<ans;;
    return 0;
}
