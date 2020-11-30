#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    string s;
    cin>>n>>s;
    if(n==1)
        cout<<1<<endl<<s<<endl;
    else
    {
        int z=count(s.begin(),s.end(),'0');
        int o=count(s.begin(),s.end(),'1');
        if(o==z)
        {
            string s2=s.substr(1,n-1);
            cout<<2<<endl<<s[0]<<" "<<s2<<endl;
        }
        else
            cout<<1<<endl<<s<<endl;
    }
    return 0;
}
