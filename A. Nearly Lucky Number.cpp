#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    cin>>s;
    sort(s.begin(),s.end());
    cnt=count(s.begin(),s.end(),'4');
    cnt+=count(s.begin(),s.end(),'7');
    // cout<<cnt<<endl;
    if(cnt==4 || cnt ==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
