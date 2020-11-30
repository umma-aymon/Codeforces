#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[110],s=0,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
        s=s+ar[i];
    }
    if(ar[0]>=(2*s+1))
        cout<<1<<endl<<1;
    else
    {
        for(i=1; i<n; i++)
        {
            if(ar[0]>=2*ar[i])
            {
                s2=ar[0]+ar[i];
                if(s2>=s)
                {
                    k=i+1;
                    break;
                }
            }
        }
        cout<<
    }

}
