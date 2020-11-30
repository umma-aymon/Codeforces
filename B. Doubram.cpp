#include<bits/stdc++.h>
using namespace std;

/*int main()
{
map<string,int>m;
    string s,ans;
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        string s2;
        s2=s[i],s2+=s[i+1];
        m[s2]++; // m map er s2 string tomo value ++ krbe
        if(mx<m[s2])
        {
            mx=m[s2]; // value ta means s2 string koybar ase oi value ta
            ans=s2; // string ta
        }
    }
    cout<<ans;
    return 0;
}*/
/*int main()
{
    int n, mx = 0;
    cin >> n;
    string s, s2;
    cin >> s;
    for(int i = 1; i < n; i++) ///for(int i = 0; i < n-1; i++)  m[s.substr(i, 2)]++;
        m[s.substr(i - 1, 2)]++; // 2 length er substring niye key banai ++ krse
    for(auto i : m)
        if(i.second > mx) // x.second hoilo giye value ta
        {
            mx = i.second;
            s2 = i.first; // x.first hoilo string ta
        }
    cout << s2; ///amader string ta dorkar ota print krlm
    return 0;
}*/
int main()
{
    int n,i,j,mx=0;
    string s,ans;
    cin>>n>>s;
    for(i=0; i<n-1; i++)
    {
        int cur=0;
        for(j=0; j<n-1; j++)
            if((s[i]==s[j])&&(s[i+1]==s[j+1]))
                cur++;
        if(cur>mx)
        {
            mx=cur;
            ans=s[i],ans+=s[i+1];
        }
    }
    cout<<ans;
    return 0;
}
