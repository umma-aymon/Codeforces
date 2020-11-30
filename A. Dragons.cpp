#include<bits/stdc++.h>
using namespace std;
int s,n,i,flag;
int main()
{
    cin>>s>>n;
    pair<int,int>x[n];
    for(i=0; i<n; i++)
        cin>>x[i].first>>x[i].second;
    sort(x,x+n);
    for(i=0; i<n; i++)
    {
        if(s>x[i].first)
            s+=x[i].second;
        else
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
