#include<bits/stdc++.h>
using namespace std;
int n,ans;
int main()
{
    while( cin>>n)
    {
        for(int i=1; i<=n/2; i++)
            if(__gcd(i,n-i)==1)
                ans=i;
        cout<<ans<<" "<<n-ans<<endl;
    }

    return 0;
}
