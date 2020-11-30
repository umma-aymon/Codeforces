#include<bits/stdc++.h>
using namespace std;
int n,i,cnt,j,ans;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        for(j=i; j<n-1; j++)
        {
            if(a[j]>=a[j+1])
                cnt++;
            else
                break;
        }
        for(j=i; j>0; j--)
        {
            if(a[j]>=a[j-1])
                cnt++;
            else
                break;
        }
        ans=max(ans,cnt);
        cnt=0;
    }
    cout<<ans+1;
    return 0;
}
