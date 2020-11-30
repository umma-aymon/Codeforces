#include<bits/stdc++.h>
using namespace std;
int main()
{
    float test,n,d,div,s,x,flag;
    cin>>test;
    while(test--)
    {
        cin>>n>>d;
        if(d<=n)
            cout<<"YES\n";
        else
        {
            x=n/2;
            flag=0;
            while(s--)
            {
                while(d/(x+1)<n)
                {
                    if((d/(x+1)+x)<=n)
                    {
                        cout<<"YES\n";
                        flag=1;
                        break;
                    }
                    else
                        x++;
                }
            }
            if(flag==0)
                cout<<"NO\n";
        }
    }
    return 0;
}
