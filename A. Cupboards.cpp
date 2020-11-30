#include<bits/stdc++.h>
using namespace std;
int n,cnt,i,s1,s2;
int r[2],l[2];
int main()
{
    cin>>n;

    /*for(i=0; i<n; i++)
        cin>>l[i]>>r[i];
    s1 = count(l, l+n, 0);
    s2 = count(r, r+n, 0);
    if(s1==0 || s1==n)
        cnt=0;
    else
    {
        if(s1<float(n/2.0))
            cnt=s1;
        else
            cnt=n-s1;
    }
    if(s2==0 || s2==n)
        cnt=cnt+0;
    else
    {
        if(s2<float(n/2.0))
            cnt+=s2;
        else
            cnt+=n-s2;
    }
    cout<<cnt;*/
    int x,y;
    while(n--)
    {
        cin>>x>>y;
        l[x]++,r[y]++;
    }
    cout<<l[0]<<" "<<l[1]<<" "<<r[0]<<" "<<r[1]<<endl;
    cout<<min(l[0],l[1])+min(r[0],r[1]);
    return 0;
}
