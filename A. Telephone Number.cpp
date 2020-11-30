#include<bits/stdc++.h>
using namespace std;
int t,n,i;
string s,s2;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        size_t f=s.find("8");
        if(f!=string::npos)
        {
            i=s.find("8");
            s2=s.substr(i,(n-i));
            //cout<<s2;
            if(s2.length()>=11)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";

    }
    return 0;
}
