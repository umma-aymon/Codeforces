#include<bits/stdc++.h>
using namespace std;
int ar[1000];
int main()
{
    long long int n,k,i,j;
    string s;
    char ch;
    cin>>n>>k;
    cin>>s;
    for(i=0; i<k; i++)
    {
        cin>>ch;
        ar[ch-'a']++;
    }
    long long int t=0,c=0;
    for(j=0; j<n; j++)
    {
        if(ar[s[j]-'a']==0)
        {
            t+=(c*(c+1))/2;
            c=0;
        }
        else
            c++;
    }
    t+=(c*(c+1))/2;
    cout<<t;
    return 0;
}
