#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s;
    s2.clear();
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='.')
            s2+='0';
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
                s2+='1';
            else
                s2+='2';
            i++;
        }
    }
    cout<<s2<<endl;
    return 0;
}
