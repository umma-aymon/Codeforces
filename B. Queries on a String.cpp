#include<bits/stdc++.h>
using namespace std;
string s,s2,s3;
int m,l,r,k;
int main()
{
    cin>>s>>m;
    while(m--)
    {
        cin>>l>>r>>k;
        l--;
        k%=r-l;
        rotate(s.begin()+l,s.begin()+r-k,s.begin()+r);
    }
    cout<<s;
    return 0;
}
