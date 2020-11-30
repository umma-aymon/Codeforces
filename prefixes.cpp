#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c;
    string s;
    cin>>n>>s;
    int t=2;
    c=0;
    for(i=0; i<n; i+=2)
    {
        if((s[i]!='a' && s[i+1]=='b')||(s[i]!='b'&&s[i+1]=='a'))
        {
            s[i]='a';
            s[i+1]='b';
            c++;
        }
    }
    cout<<c<<endl<<s<<endl;
    return 0;
}
