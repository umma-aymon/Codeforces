#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j,len,flag,n;
    char temp;
    string s,s2,s3;
    cin>>k;
    while(k--)
    {
        cin>>n;
        cin>>s>>s2;
        //cout<<s<<" "<<s2;
        s3=s2;
        flag=0;
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                if(s[j]!=s3[j])
                {
                    temp=s[j];
                    s3[j]=s[j];
                    s[j]=temp;
                    if(s==s3)
                    {
                        flag=1;
                        break;
                    }
                    else
                        flag=0;
                }
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
