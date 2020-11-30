#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4]= {1,2,3,4};
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=(n%10-1)*10;
        int i=0;
        while(n)
        {
            n/=10;
            ans+=a[i++];
        }
        cout<<ans<<endl;
    }
    return 0;
}
