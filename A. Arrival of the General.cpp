#include<bits/stdc++.h>
using namespace std;
int n,i,mn,mx,a[1000],x,y;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    mn=*min_element(a,a+n);
    mx=*max_element(a,a+n);
    for(i=0; i<n; i++)
        if(a[i]==mx)
        {
            x=i;
            break;
        }
    for(i=n-1; i>=0; i--)
        if(a[i]==mn)
        {
            y=i;
            break;
        }
    if(x==0 && y==n-1)
        cout<<0;
    else if(x==n-1 && y==0)
        cout<<(2*n)-3; // mx,mn er nijer position baad jbe r tara overtake krbe tai arw 1 baad jbe
    else
    {
        //if(x==0)
        //  cout<<(n-1)-y;
        //else if(y==0)
        //  cout<<x;
        //else
        {
            if(x>y)
                cout<<(x+((n-1)-y)-1); //mx mn er age ase so overtake krbe tai 1 baad jbe
            else
                cout<<x+((n-1)-y);
        }
    }
    //cout<<x<<" "<<y;
    return 0;
}
