#include<bits/stdc++.h>
using namespace std;
int n,cnt,k;
string s;
int main()
{
    cin>>n>>k;
    while(n--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        for(int i=0; i<=k; i++)
        {
            int a=s[i];
            if(a!=i)
                break;
            else
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

