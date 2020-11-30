#include<bits/stdc++.h>
using namespace std;
int n,i,flag;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            flag=1;
    }
    if(flag)
        cout<<2;
    else
        cout<<3;
    return 0;
}
