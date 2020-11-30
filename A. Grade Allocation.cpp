#include<bits/stdc++.h>
using namespace std;
int t,n,m,i,j,s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n];
        s=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s>m)
            cout<<m<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
