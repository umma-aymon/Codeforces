#include<bits/stdc++.h>
using namespace std;
int n,a,i,j,cnt;
int main()
{
    cin>>n>>a;
    int c[n];
    c[0]=0;
    for(i=1; i<=n; i++)
        cin>>c[i];
    if(c[a])
        cnt++;
    for(j=1; ; j++)
    {
        if(a+j>n && a-j<1)
            break;
       // else if(c[a+j]==1 && c[a-j]==1)
         //   cnt+=2;
        else if(a+j>n && a-j>=1 && c[a-j]==1)
            cnt++;
        else if(a-j<1 && a+j<=n && c[a+j]==1)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
