#include<bits/stdc++.h>
using namespace std;
long long int fr[3];
int main()
{
    int t,sum;
    cin>>t;
    while(t--)
    {
        cin>>fr[0]>>fr[1]>>fr[2];
        sum=0;
        sort(fr,fr+3);
        if((fr[0]==fr[1]&&fr[1]==fr[2]) || (fr[1]-fr[0]==1&&fr[2]-fr[1]==1))
            cout<<0<<endl;
        else if(fr[0]==fr[1])
        {
            fr[2]=fr[2]-1;
            if(fr[1]==fr[2])
                cout<<0<<endl;
            else
                cout<<2*(fr[2]-(fr[1]+1))<<endl;
        }
        else if(fr[1]==fr[2])
        {
            fr[0]=fr[0]+1;
            if(fr[1]==fr[0])
                cout<<0<<endl;
            else
                cout<<2*((fr[2]-1)-fr[0])<<endl;
        }
        else
        {
            fr[0]=fr[0]+1;
            fr[2]=fr[2]-1;
            sum=abs(fr[1]-fr[0])+abs(fr[2]-fr[0])+abs(fr[1]-fr[2]);
            cout<<sum<<endl;
        }
    }
    return 0;
}
