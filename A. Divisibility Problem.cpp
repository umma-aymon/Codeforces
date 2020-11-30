#include<bits/stdc++.h>
using namespace std;
int t,cnt,a,b;
double d;
int main()
{
    freopen("in.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>a>>b;
        if(a%b==0)
            cout<<0<<endl;
        else
            cout<<b-(a%b)<<endl;
        /*if(a%b==0)
            cout<<0<<endl;
        else
        {
            if(a>b)
            {
                d=ceil(double(a)/double(b));
                // cout<<d<<" ";
                b=b*d;
                cout<<abs(a-b)<<endl;
            }
            else
                cout<<abs(a-b)<<endl;
        }*/
    }
    return 0;
}
