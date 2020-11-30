#include<bits/stdc++.h>
using namespace std;
int t,i,j,k,cnt;
int main()
{
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i=0; i<s.length(); i++)
            if(s[i]=='1')
                break;
        cnt=0;
        for(j=s.length(); j>=i; j--)
            if(s[j]=='1')
                break;
        for(k=i; k<=j; k++)
            if(s[k]=='0')
                cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
