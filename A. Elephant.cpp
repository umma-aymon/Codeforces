#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,s;
    cin>>x;
    s=0;
    while(x!=0)
    {
        if(x>=5)
        {
            s=s+(x/5);
            x=x%5;
        }
        else if(x>=4)
        {
            s=s+(x/4);
            x=x%4;
        }
        else if(x>=3)
        {
            s=s+(x/3);
            x=x%3;
        }
        else if(x>=2)
        {
            s=s+(x/2);
            x=x%2;
        }
        else if(x>=1)
        {
            s=s+(x/1);
            x=x%1;
        }
    }
    cout<<s<<endl;
    return 0;
}
