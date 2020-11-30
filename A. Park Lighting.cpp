#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<fixed<<setprecision(0)<<ceil((n*m)/2.0)<<endl;
    }
    return 0;
}
