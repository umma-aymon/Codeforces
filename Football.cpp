#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int len,i,c,t;
    cin>>s;
    len=s.size();
    if(len<7)
        cout<<"NO";
    else
    {
        c=0;
        t=6;
        for(i=0; i<len; i++)
        {
            while(t--)
            {
                if(s[i]==s[i+1])
                    c++;
            }
        }

        if(c>=7)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
