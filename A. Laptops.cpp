#include<bits/stdc++.h>
using namespace std;
int n,i,a,b,f=0;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a!=b)
            f=1;
    }
    if(!f)
        cout<<"Poor Alex\n";
    else
        cout<<"Happy Alex\n";
    return 0;
}
