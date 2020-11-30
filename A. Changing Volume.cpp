#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,dif,d,dd,ddd;
    cin>>t;
    while(t--)
    {
       // c=0;
       d=0;dd=0;ddd=0;
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else if(b>a)
        {
            dif=b-a;
            d=dif/5;
            dif=dif-(d*5);
            dd=dif/2;
            dif=dif-(dd*2);
            ddd=dif/1;
            cout<<d+dd+ddd<<endl;
            /*while(dif-5>=b)
            {
                a=a+5;
                c++;
            }
            while(a+2<=b)
            {
                a=a+2;
                c=c+1;
            }
            while(a+1<=b)
            {
                a=a+1;
                c++;
            }
            cout<<c<<endl;*/
        }
        else
        {
            /*while(a-5>=b)
            {
                a=a-5;
                c++;
            }
            while(a-2>=b)
            {
                a=a-2;
                c++;
            }
            while(a-1>=b)
            {
                a=a-1;
                c++;
            }
            cout<<c<<endl;*/
            dif=a-b;
            d=dif/5;
            dif=dif-(d*5);
            dd=dif/2;
            dif=dif-(dd*2);
            ddd=dif/1;
            cout<<d+dd+ddd<<endl;
        }
    }
    return 0;
}
