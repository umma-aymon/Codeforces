#include<bits/stdc++.h>
using namespace std;
int n,i,j,cnt;
int main()
{
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    int s=0;
    for(i=0; i<n; i++)
    {
        s+=a[i];
        if(s<0)
            cnt++,s=0;
    }
    cout<<cnt<<endl;
    return 0;
}
