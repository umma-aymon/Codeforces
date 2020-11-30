#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,d,s;
int  main()
{
    cin>>n>>m;
    int a[n];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i]=a[i]/m;
    }
    for(i=1; i<=n; i++)
        cout<<a[i]<<" ";
   /* d=0;
    for(i=1; i<=n; i++)
        if(a[i])
            s=i,d=1;
    if(d)
        cout<<s;
    else
        cout<<n;*/
    return 0;
}
