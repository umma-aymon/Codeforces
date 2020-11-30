#include<bits/stdc++.h>
using namespace std;
int n,d1,d2,mn,mx,i;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
    for(i=1; i<n-1; i++)
    {
        mn=min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
        mx=max(abs(a[i]-a[0]),abs(a[n-1]-a[i]));
        cout<<mn<<" "<<mx<<endl;
    }
    cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
    return 0;
}
