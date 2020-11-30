#include<bits/stdc++.h>
using namespace std;
double n,t,k,d;
int main()
{
    cin>>n>>t>>k>>d;
    double ans=ceil(n/k)*t;
    //  cout<<ans<<" ";
    if(ans>t+d)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
