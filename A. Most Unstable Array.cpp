#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
            cout<<"0\n";
        else if(n==2)
            cout<<m<<"\n";
        else
            cout<<2*m<<"\n";
    }
    return 0;
}
