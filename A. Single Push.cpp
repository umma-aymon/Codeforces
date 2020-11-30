#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100010],b[100010],i,k,flag,j,l,r;
    cin>>t;
    while(t--)
    {
        flag=0;
        k=0;
        cin>>n;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
            cin>>b[i];
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                k=b[i]-a[i];
                l=i;
                break;
            }
        }
        if(k>0)
        {
            for(j=l; j<n; j++)
            {
                if(a[j]==b[j])
                {
                    r=j;
                    break;
                }
                else
                    r=n;
            }
            for(i=l; i<r; i++)
                a[i]=a[i]+k;
        }
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                flag=0;
                break;
            }
            else
                flag=1;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
/*
while(sizeof(a) && !a.back())
    a.pop_back();
reverse(a.begin(),a.end());
while(sizeof(a) && !a.back())
    a.erase(unique(a.begin(),a.end()),a.end());
*/
