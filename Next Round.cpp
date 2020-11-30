#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[55],i,c,d;
    cin>>n>>k;
    for(i=0; i<n; i++)
        cin>>a[i];
    c=k;
    d=a[k-1];
    for(i=k; i<n; i++)
    {
        if(d==a[i]&&a[i])
            k++;
    }
    if(k)
        cout<<k;
    else
        cout<<0;
    return 0;
}
