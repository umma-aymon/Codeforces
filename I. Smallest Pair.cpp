#include<bits/stdc++.h>
using namespace std;
int t,n,i,m,mi,mj,ans,m2;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        m=a[0];
        for(i=1; i<n; i++)
            if(m>a[i])
                m=a[i],mi=i+1;
       // ans=m-mi;
        //cout<<m<<" "<<mi<<" ";
       // cout<<ans<<endl;
        m2=a[0];
        if(m2==m)
            m2[]
        for(i=1; i<n; i++)
        {
            if(a[i]==m)
                continue;
            if(m2>a[i])
                m2=a[i],mj=i+1;
        }
      //  cout<<m2<<" "<<mj<<" ";
        ans=m+m2+mj-mi;
        cout<<ans<<endl;
    }
    return 0;
}
