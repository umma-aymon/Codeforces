#include<bits/stdc++.h>
using namespace std;
int n,m,i,a[55],j,k;
void sieve()
{
    for(i=0; i<=50; i++)
        a[i]=0;
    a[0]=a[1]=1;
    for(i=2; i*i<=50; i++)
    {
        if(a[i]==0)
            for(j=i*2; j<=50; j=j+i)
                a[j]=1;
    }
}
int main()
{
    sieve();
    // for(i=0;i<=50;i++)
    //   cout<<a[i]<<" ";
    // cout<<endl;
    cin>>n>>m;
    //if(n==2 && m==3)
      //  cout<<"YES\n";
    //else
    {
        for(k=n+1; k<=m; k++)
            if(a[k]==0)
                break;
        if(k==m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
