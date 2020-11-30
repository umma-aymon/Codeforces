#include<bits/stdc++.h>
using namespace std;
//int a[1010],b[1010];
int a,b,n,i,s,mx;
int main()
{
    cin>>n;
    //int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        s=s-a+b;
       // cout<<s<<" ";
        if(mx<s)
            mx=s;
    }
    // cin>>a[i]>>b[i];
   /* s=b[0]-a[1];
    mx=b[0];
    for(i=1; i<n; i++)
    {
        s=s+b[i];
        if(s>mx)
            mx=s;
        if(i+1<=n-1)
            s=s-a[i+1];
    }*/
    cout<<mx;
    return 0;
}
