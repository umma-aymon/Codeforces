#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    transform(s.begin(), s.end(), s.begin(),::tolower);
    sort(s.begin(),s.end());
    s.erase( unique(s.begin(), s.end()),s.end());
    if(s.length()==26)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
