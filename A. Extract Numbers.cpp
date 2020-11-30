#include<bits/stdc++.h>
using namespace std;
 string s,a,b,s2[100000];
int main()
{

    int i,j,cnt;
    cin>>s;
    j=0,cnt=0;
    for(i=0; i<s.length(); i++)
    {
        while(s[i]!=',' || s[i]!=';')
        {
            s2[j]+=s[i];
            i++;
        }
        cnt++;
        j++;
    }
    for(i=0; i<cnt; i++)
        cout<<s2[i]<<endl;
    return 0;
}
