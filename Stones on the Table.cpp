#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c;
    string s;
    cin>>n>>s;
    c=0;
    for(i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    cout<<c;
    return 0;
}
