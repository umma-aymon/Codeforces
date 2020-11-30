#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n/2 & 1)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            int s=0,s2=0;
            for(i=2,j=1; j<=n/2; i+=2,j++)
                cout<<i<<" ",s+=i;
            for(i=1,j=1; j<n/2; i+=2,j++)
                cout<<i<<" ",s2+=i;
            cout<<s-s2<<endl;
        }
    }
    return 0;
}
