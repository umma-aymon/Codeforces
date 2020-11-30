#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a,b,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>a>>b;
        if(a>b)
            swap(a,b);
        for(i=a; i>1&&x; i--)
            a--,x--;
        for(i=b; i<n&&x; i++)
            b++,x--;
        cout<<b-a<<endl;
    }
    return 0;
}
