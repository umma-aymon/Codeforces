#include<bits/stdc++.h>
using namespace std;
int t,n,x,i;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a,odd=0,even=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a & 1)
                odd++;
            else
                even++;
        }
        // cout<<even<<" "<<odd<<endl;
        if(!(odd & 1))
            odd--;
        // cout<<odd<<endl;
        if(odd>=x)
            cout<<"Yes!\n";
        else
        {
            if(odd>0 && even-(x-odd)>=0)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
