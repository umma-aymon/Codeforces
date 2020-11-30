#include<bits/stdc++.h>
using namespace std;
int t;
double n,d;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=ceil(n/2);
        cout<<fixed<<setprecision(0)<<d-1<<endl;
    }
    return 0;
}
