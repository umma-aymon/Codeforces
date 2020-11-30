#include<bits/stdc++.h>
using namespace std;
long long int t,n,k,o,e;
int main()
{
    cin>>t;
    while(t--)
    {
        e=0,o=0;
        cin>>n>>k;
        if(n%2==0)
            e=1;
        else
            o=1;
        if(n>=(k*k))
        {
            if(e&&k%2==0)
                cout<<"YES\n";
            else if(o&&k%2!=0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
