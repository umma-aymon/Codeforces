#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    vector<int>v;
    int x,i;
    for(i=0; i<4; i++)
    {
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<4-v.size();
    v.clear();
    return 0;
}
