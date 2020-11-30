#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,flag;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x%2!=0&&x*2==y)
            cout<<"NO\n";
        else if(x>=y)
            cout<<"YES\n";
        else
        {
            flag=0;
            for(int i=1;; i++)
            {
                if(x%2==0)
                    x=(3*x)/2;
                if(x==y||x-1==y)
                {
                    flag=1;
                    break;
                }
                x--;
            }
            if(flag==0)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
