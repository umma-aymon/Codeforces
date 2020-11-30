#include<bits/stdc++.h>
using namespace std;
int t,a[4];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]==a[1]||a[1]==a[2])
            cout<<"Yes\n";
        else
            cout<<"No\n";
        /*while(r&&g&&b)
            r--,g--,b--;
        if(r&&!g&&!b)
            cout<<"Yes\n";
        else if(!r&&g&&!b)
            cout<<"Yes\n";
        else if(!r&&!g&&b)
            cout<<"Yes\n";
        else if(!r&&!g&&!b)
            cout<<"Yes\n";
        else
            cout<<"No\n";*/
    }
    return 0;
}
