#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        reverse(s.begin(),s.end());
        if(s[0]=='o')
            cout<<"FILIPINO\n";
        else if(s[0]=='u')
            cout<<"JAPANESE\n";
        else if(s[0]=='a')
            cout<<"KOREAN\n";
    }
    return 0;
}
