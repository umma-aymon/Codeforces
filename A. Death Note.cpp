#include<bits/stdc++.h>
using namespace std;
int n,m,a,i,s;
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a;
        cout<<(a+s)/m<<" ";
        s=(a+s)%m;
    }
    return 0;
}
