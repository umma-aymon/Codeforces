#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double v;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        v+=a[i];
    }
    v=v/double(n);
    cout<<setprecision(12)<<fixed<<v;
    return 0;
}
