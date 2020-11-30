#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,r;
    cin>>n;
    r=sqrt(n);
    for( i=r; i>0; i--)
    {
        if(n%i==0)
        {
            d=n/i;
            break;
        }
    }
    cout<<2*(d+i)<<endl;
    return 0;
}
