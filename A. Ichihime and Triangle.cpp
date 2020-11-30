#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,t;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if((a==b&&b==c) || b==c || c==d)
            cout<<b<<" "<<c<<" "<<c<<endl;
        else
            cout<<a<<" "<<b+(c-b)<<" "<<c<<endl;
    }
    return 0;
}
