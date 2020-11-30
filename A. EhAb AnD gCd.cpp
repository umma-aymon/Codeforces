#include<bits/stdc++.h>
using namespace std;
int t,x;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x==2)
            cout<<1<<" "<<1<<endl;
        else if(x%2==0)
            cout<<2<<" "<<x-2<<endl;
        else
            cout<<1<<" "<<x-1<<endl;
    }
    return 0;
}
