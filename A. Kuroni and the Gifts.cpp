#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        for(i=0; i<n; i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
