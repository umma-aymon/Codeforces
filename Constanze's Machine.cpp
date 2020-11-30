#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c;
    cin>>s;
    int len=s.size();
     c=0;
    if(!(s.begin(),s.end(),'m')||!(s.begin(),s.end(),'w'))
    for(int i=0;i<len;i++)
    {
        if(s[i]=='n'&&s[i+1]=='n')
        c=c+2;
        else if(s[i]=='u'&&s[i+1]=='u')
            c=c+2;
    }

    return 0;
}
