#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t,a,b,s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else if(a>b)
        {
            s=a-b;
            if(s%2==0)
                cout<<1<<endl;
            else
              cout<<2<<endl;
        }
        else if(a<b)
        {
            s=b-a;
            if(s%2==0)
                cout<<2<<endl;
            else
              cout<<1<<endl;
        }
    }
    return 0;
}
