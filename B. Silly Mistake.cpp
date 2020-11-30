#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i;
    vector<int>v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    if(n==v.size())
    {
        s=accumulate(v.begin(),v.end(),0);
        if(s==0)
    }
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}
