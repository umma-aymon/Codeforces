#include<bits/stdc++.h>
using namespace std;
int n,s,i,j,mf,mt,f,t,dif;
map<int,int>m;
int main()
{
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        cin>>f>>t;
        m[f]=t;
    }
    mf=s;
    for(auto it=m.rbegin(); it!=m.rend(); it++)
    {
        if(it->second>mt)
        {
            mf=it->first,mt=it->second;
            dif=abs((s-mf)-it->second);
        }
    }
    cout<<s+dif;
    return 0;
}
