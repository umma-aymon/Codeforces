#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,g,h;
    cin>>g>>h>>s;
    sort(s.begin(),s.end());
    sort(h.begin(),h.end());
    sort(g.begin(),g.end());
    g=g+h;
    sort(g.begin(),g.end());
    if(g==s)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
