#include<bits/stdc++.h>
using namespace std;
int t,h,m;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        cout<<1440-((h*60)+m)<<endl;
    }
    return 0;
}
