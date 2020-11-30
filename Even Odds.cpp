#include<bits/stdc++.h>
using namespace std;
vector<unsigned long long>v;
int main()
{
    unsigned long long n,k,i;

    cin>>n>>k;
    for(i=1; i<=k; i=i+2)
        v.push_back(i);
    for(i=2; i<=k; i=i+2)
        v.push_back(i);
    //for(i=0; i<v.size(); i++)
    //cout<<v[i]<<" ";
    cout<<v[k-1];
    return 0;
}
