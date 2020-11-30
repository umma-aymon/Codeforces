#include<bits/stdc++.h>
using namespace std;
int t,i,j;
string a,b,c;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int len=a.length();
        int flag=0;
        for(i=0; i<len; i++)
        {
            if(a[i]==b[i] && a[i]!=c[i])
            {
                flag=1;
                break;
            }
            else if(c[i]==a[i])
                b[i]=c[i];
            else if(c[i]==b[i])
                a[i]=c[i];
        }
        if(flag)
            cout<<"NO\n";
        else if(!flag && a==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
