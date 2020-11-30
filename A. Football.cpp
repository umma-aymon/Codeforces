#include<bits/stdc++.h>
using namespace std;
int n,i,d,cnt;
int main()
{
    string s[100],s2,s3;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>s[i];
    if(n==1)
        cout<<s[0];
    else
    {
        s2=s[0];
        cnt=1;
        for(i=1; i<n; i++)
        {
            if(s[i]==s2)
                cnt++;
            else
                s3=s[i];
        }
        d=n-cnt;
        if(d<cnt)
            cout<<s2;
        else
            cout<<s3;
    }
    return 0;
}
