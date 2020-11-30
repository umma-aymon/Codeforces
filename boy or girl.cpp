#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;
    string s;
    int len;
    cin>>s;
    int l=s.size();
    //cout<<s<<" ";
    for(int i=0; i<l; i++)
        v.push_back(s[i]);
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    len=v.size();
    // for(int i=0;i<len;i++)
    //cout<<v[i]<<" ";
    //cout<<len;
    if(len%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
