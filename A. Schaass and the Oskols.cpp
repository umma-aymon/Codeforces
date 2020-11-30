#include<bits/stdc++.h>
using namespace std;
int n,a[110],m,x,y,i;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    while(m--)
    {
        cin>>x>>y;
        x--;
        if(x-1>=0)
            a[x-1]+=y-1;
        if(x+1<n)
            a[x+1]+=a[x]-y;
        a[x]=0;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;
    return 0;
}
