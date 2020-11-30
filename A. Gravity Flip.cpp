#include<bits/stdc++.h>
using namespace std;
int n,i;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
