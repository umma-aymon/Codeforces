#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,l,r,i,c,j,rr;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        c=0;
        rr=r/2;
        for(i=l; i<=rr; i++)
        {
            for(j=l;j<=r;j++)
            if((i+j)==(i^j))
                c++;
        }
        cout<<2*c<<'\n';
    }
    return 0;
}
