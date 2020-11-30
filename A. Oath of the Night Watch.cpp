#include<bits/stdc++.h>
using namespace std;
int n,i,cnt;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n; i++)
        if(a[i]!=a[0]&&a[i]!=a[n-1])
            cnt++;
    cout<<cnt;
    return 0;
}
