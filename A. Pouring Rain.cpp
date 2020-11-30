#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
double d,h,v,e,water,waterd,ans;
int main()
{
    cin>>d>>h>>v>>e;
    d=d/2;
    water=pi*d*d*h;
    waterd=pi*d*d*e;
    ans=water/(v-waterd);
    if(waterd<v)
        cout<<"YES\n"<<fixed<<setprecision(12)<<ans;
    else
        cout<<"NO\n";
    return 0;
}
