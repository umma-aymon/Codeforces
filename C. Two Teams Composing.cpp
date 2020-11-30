#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
map<int,int>m;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]+=1;
        }
        for(auto i:m)
            cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
