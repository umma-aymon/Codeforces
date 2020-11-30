#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,s,d;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>a>>b>>c;
        while((a>=1&&b>=2)||(c>=2&&b>=1))
        {
            if(c>=2&&b>=1)
            {
                s=s+3;
                c=c-2;
                b--;
            }
            else if(b>=2&&a>=1)
            {
                s=s+3;
                b=b-2;
                a--;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
