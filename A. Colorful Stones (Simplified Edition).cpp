#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int i,j,len;
    cin>>s;
    cin>>t;
    len=t.length();
    j=0;
    for(i=0; i<len; i++)
        if(s[j]==t[i])
            j++;
    cout<<j+1;
    return 0;
}
