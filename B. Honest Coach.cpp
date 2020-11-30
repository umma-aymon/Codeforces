#include<bits/stdc++.h>
using namespace std;
int t,n,s[1010],i,mn;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>s[i];
        sort(s,s+n);
        mn=1000;
        for(i=0; i<n-1; i++)
            mn=min(mn,(s[i+1]-s[i]));
        cout<<mn<<endl;
    }
    return 0;
}
