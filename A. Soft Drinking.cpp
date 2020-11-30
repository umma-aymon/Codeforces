#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,x,y,z,mn;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=(k*l)/nl;
    y=c*d;
    z=p/np;
    mn=(x<y&&x<z)?x:(y<z&&y<x)?y:z;
   // cout<<x<<" "<<y<<" "<<z<<" "<<mn<<endl;
    cout<<mn/n;
    return 0;
}
