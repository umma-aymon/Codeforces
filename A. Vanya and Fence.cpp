#include<bits/stdc++.h>
using namespace std;
int n,h,i,x,cnt,ans;
int main()
{
    cin>>n>>h;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        if(a[i]>h)
            break;
        cnt++;
    }
    // x=lower_bound(a,a+n,h)-a;
    // cout<<x;
    ans=cnt*1+(n-cnt)*2;
    cout<<ans;
    return 0;
}
