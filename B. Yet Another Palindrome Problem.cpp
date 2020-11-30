#include<bits/stdc++.h>
using namespace std;
int a[10000],i,j,t,n,flag;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>a[i];
        flag=0;
        for(i=0; i<n; i++)
            for(j=i+2; j<n; j++)
                if(a[i]==a[j])
                {
                    flag=1;
                    break;
                }
        if(flag)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
