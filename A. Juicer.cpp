#include<bits/stdc++.h>
using namespace std;
int n,b,d,i,j,s,cnt;
int main()
{
    cin>>n>>b>>d;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    s=0;
    for(i=0; i<n; i++)
    {
        if(a[i]<=b)
        {
            s+=a[i];
            if(s>d)
                cnt++,s=0;
        }
    }
    cout<<cnt;
    return 0;
}

