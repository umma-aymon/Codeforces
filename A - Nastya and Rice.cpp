#include<bits/stdc++.h>
using namespace std;
int t,n,a,b,c,d,a2,b2,c2,d2;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        a2=a-b,b2=a+b;
        c2=c-d,d2=c+d;
        // cout<<a2<<" "<<b2<<" "<<c2<<" "<<d2<<endl;
        if(a2*n<=d2 && b2*n>=c2)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

