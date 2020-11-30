#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,i,s=0;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++)
        s=s+(k*i);
    if(s>n)
        cout<<s-n;
    else
        cout<<0;
    return 0;
}
