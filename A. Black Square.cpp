#include<bits/stdc++.h>
using namespace std;
int a[4],i,j,cnt,c1,c2,c3,c4;
int main()
{
    string s;
    for(i=0; i<4; i++)
        cin>>a[i];
    cin>>s;
    sort(s.begin(),s.end());
    c1=count(s.begin(),s.end(),'1');
    c2=count(s.begin(),s.end(),'2');
    c3=count(s.begin(),s.end(),'3');
    c4=count(s.begin(),s.end(),'4');
    cnt=(c1*a[0])+(c2*a[1])+(c3*a[2])+(c4*a[3]);
    cout<<cnt;
    return 0;
}
