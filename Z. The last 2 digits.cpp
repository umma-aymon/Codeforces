#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,m;
int main()
{
    cin>>a>>b>>c>>d;
    a=a%100,b=b%100,c=c%100,d=d%100;
    m=a*b*c*d;
    /* ostringstream s;
     s<<m;
     string ss=s.str();
     int len=ss.length();
     cout<<ss[len-2]<<ss[len-1]<<endl;*/
    if(m%100<10)
        cout<<0<<m%100<<endl;
    else
        cout<<m%100;
    return 0;
}

