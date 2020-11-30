#include<bits/stdc++.h>
using namespace std;
int flag,n,i;
int main()
{
    string s,s2;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int len=s.length();
        sort(s.begin(),s.end());
        s.erase( unique(s.begin(), s.end()),s.end());
        if(len==1)
            cout<<"YES\n";
        else if(len!=s.length())
            cout<<"NO\n";
        else
        {
            flag=0;
            for( i=0; i<len-1; i++)
                if(abs(s[i]-s[i+1])!=1)
                {
                    flag=1;
                    break;
                }
            if(flag)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
