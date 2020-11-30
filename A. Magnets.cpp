#include<bits/stdc++.h>
using namespace std;
int n,i,cnt;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    int s=a[0];
    for(i=1; i<n; i++)
        if(a[i]!=s)
            cnt++,s=a[i];
    cout<<cnt+1;
    return 0;
}
