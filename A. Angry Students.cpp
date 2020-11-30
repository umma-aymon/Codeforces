#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,c,i,m;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>k>>s;
        //reverse(s.begin(),s.end());
        m=0;
        for(i=0; i<k; i++)
        {
            c=0;
            if(s[i]=='A')
            {
                while(s[i+1]=='P')
                    c++,i++;
                m=max(m,c);
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
