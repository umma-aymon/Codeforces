#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len,i,flag;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]==s[i+1]&&s[i]!='?')
            {
                flag=0;
                break;
            }
            if(s[i]=='?')
            {
                if(s[i-1]!='a' && s[i+1]!='a')
                {
                    s[i]='a',flag=1;
                }
                else if(s[i-1]!='b' && s[i+1]!='b')
                {
                    s[i]='b',flag=1;
                }
                else if(s[i-1]!='c' && s[i+1]!='c')
                {
                    s[i]='c',flag=1;
                }
            }
        }

        if(flag)
            cout<<s<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
