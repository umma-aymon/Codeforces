#include<bits/stdc++.h>
using namespace std;
int n,a[50000],i,j,c1,c2,c3,c,k;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            c1++;
        else if(a[i]==2)
            c2++;
        else
            c3++;
    }
    c=min(min(c1,c2),c3);
    cout<<c<<endl;
    while(c--)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                a[i]=0;
                cout<<i+1<<" ";
                for(j=0; j<n; j++)
                {
                    if(a[j]==2)
                    {
                        a[j]=0;
                        cout<<j+1<<" ";
                        for(k=0; k<n; k++)
                        {
                            if(a[k]==3)
                            {
                                a[k]=0;
                                cout<<k+1<<endl;
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}
