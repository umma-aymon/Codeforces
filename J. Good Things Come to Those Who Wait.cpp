#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,k,a[10000],i,j,x;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>k;
        for(j=0; j<k; j++)
            cin>>a[j];
        sort(a,a+k);
        x = a[0] * a[k - 1];
        cout<<"Case "<<i<<": "<< x<<endl;
    }
    return 0;
}
