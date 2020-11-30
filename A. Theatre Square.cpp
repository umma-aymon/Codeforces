#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,x,y;
    cin>>n>>m>>a;
    x=n/a+(n%a!=0);
    y=m/a+(m%a!=0);
    cout<<x*y;
    return 0;
}
