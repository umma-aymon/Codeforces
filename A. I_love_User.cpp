#include<bits/stdc++.h>
using namespace std;
int n,l,r,cnt,i,j,low,high;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    if(a[0]<a[1])
        low=a[0],high=a[1];
    else
        low=a[1],high=a[0];
    if(low==high)
        cnt=0;
    else
        cnt=1;
    for(i=2; i<n; i++)
    {

        if(a[i]>high)
            high=a[i],cnt++;
        if(a[i]<low)
            low=a[i],cnt++;
    }
    cout<<cnt;
    return 0;
}
