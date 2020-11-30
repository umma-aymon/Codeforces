#include<bits/stdc++.h>
using namespace std;
int n,i,cnt,j;
int main()
{
    cin>>n;
    int a[n],h[n];
    for(i=0; i<n; i++)
        cin>>a[i]>>h[i];
    sort(a,a+n);
    sort(h,h+n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(a[i]==h[j])
                cnt++;
    cout<<cnt<<endl;
    return 0;
}
