#include<bits/stdc++.h>
using namespace std;
int t,n,i;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        reverse(a, a + n);
        for(i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
