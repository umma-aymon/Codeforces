#include<bits/stdc++.h>
using namespace std;
int t,n,d,a[110],i,j,cnt;
int main()
{
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>d;
        for(i=0;i<n;i++)
            cin>>a[i];
        cnt=a[0];
        if(a[1]<=d)
            cnt+=a[1];
         d=d-a[1];
        i=2;
        while(d)
        {
            if(a[i]-d/i)
                cnt+=a[i];
            d=d-i;
            i++;
        }

    }
}
