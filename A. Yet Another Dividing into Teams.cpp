#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,a[100],i,j,c;
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        c=1;
        for(j=0; j<n-1; j++)
        {
            if(abs(a[j]-a[j+1])==1)
            {
                c=2;
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
