#include<bits/stdc++.h>
using namespace std;
int n,x,y,z,s,s2,s3;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        s=s+x;
        s2+=y;
        s3+=z;
    }
  //  cout<<s<<" "<<s2<<" "<<s3<<" ";
    if(!s&&!s2&&!s3)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
