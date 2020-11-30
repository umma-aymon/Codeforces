#include<bits/stdc++.h>
using namespace std;
int y,w,mx,g;
int main()
{
    cin>>y>>w;
    mx=(6-max(y,w))+1;
    g=__gcd(mx,6);
    cout<<mx/g<<"/"<<6/g<<endl;
    return 0;
}
