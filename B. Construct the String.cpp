#include<bits/stdc++.h>
using namespace std;
int t,n,i,a,b;
string s,s2="abcdefghijklmnopqrstuvwxyz",s3,s4;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        for(i=0; i<b; i++)
            s3+=s2[i];
        for(i=0; i<n; i++)
            s4+=s3;
        s=s4.substr(0,n);
        cout<<s<<endl;
        s3.clear();
        s4.clear();
    }
    return 0;
}
