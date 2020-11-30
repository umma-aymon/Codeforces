#include<bits/stdc++.h>
using namespace std;
int t,n,i,j,m,s,e,k,l,flag;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n],b[n],p[m];
        for(i=0; i<n; i++)
            cin>>b[i];
        copy(b,b+n,a);
        sort(b,b+n);
        for(i=0; i<m; i++)
        {
            cin>>p[i];
            p[i]=p[i]-1;
        }
        sort(p,p+m);
        for(i=1; i<=n-1; ++i)
        {
            for(j=0; j<(n-i); ++j)
                if(a[j]>a[j+1])
                    if(binary_search(p,p+m,j))
                        swap(a[j],a[j+1]);
        }
        flag=0;
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
