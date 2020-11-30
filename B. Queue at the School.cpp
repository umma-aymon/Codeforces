#include<bits/stdc++.h>
using namespace std;
int i,t,n;
string s;
int main()
{
    cin>>n>>t>>s;
    while(t--)
    {
        for(i=0; i<s.length(); i++)
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
    }
    cout<<s<<endl;
    return 0;
}
