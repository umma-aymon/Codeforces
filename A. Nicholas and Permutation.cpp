#include<bits/stdc++.h>
using namespace std;
int n,i,a,mxv,mnv;
int main()
{
    cin>>n;
    int a[n];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            mnv=i;
        else if(a[i]==n)
            mxv=i;
    }
    //cout<<mxv<<" "<<mnv<<endl;
    int mn2=min(mnv,mxv);
    int mx2=max(mnv,mxv);
    int mn=mn2-1;
    int mx=n-mx2;
    //cout<<mx<<" "<<mn<<endl;
    if(mn>mx)
        mn2=1;
    else
        mx2=n;
    cout<<mx2-mn2;
    return 0;
}
