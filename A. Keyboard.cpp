#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./",s,x;
    int i,j;
    cin>>x>>s;
    int len=s1.length();
    if(x=="R")
    {
        for(i=0; i<s.length(); i++)
            for(j=0; j<len; j++)
                if(s[i]==s1[j])
                    cout<<s1[j-1];
    }
    else
    {
        for(i=0; i<s.length(); i++)
            for(j=0; j<len; j++)
                if(s[i]==s1[j])
                    cout<<s1[j+1];
    }
    return 0;
}

