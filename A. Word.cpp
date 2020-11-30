#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0,sub=0;
    for(int i=0; i<s.length(); i++)
        if(s[i]>='A' && s[i]<='Z')
            cnt++;
    sub=s.length()-cnt;
    if(cnt>sub)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
    else
        {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    return 0;
}
