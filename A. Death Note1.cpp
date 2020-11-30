#include<bits/stdc++.h>
using namespace std;
int n,m,i,s;
int main()
{
    cin>>n>>m;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        s+=a[i];
        cout<<s/m<<" ";
        s=s%m;
    }
    return 0;
}
