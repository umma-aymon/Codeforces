#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,q,x,y,year;
 string s[200],t[200];
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>s[i];
    for(i=0; i<m; i++)
        cin>>t[i];
    cin>>q;
    while(q--)
    {
        cin>>year;
        x=(year-1)%n;
        y=(year-1)%m;
        cout<<s[x]<<t[y]<<endl;
    }
    return 0;
}
