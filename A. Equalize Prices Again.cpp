#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int q,i,a[100010],n,av;
    double s;
    cin>>q;
    while(q--)
    {
        cin>>n;
        s=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        av=ceil(s/n);
        cout<<av<<endl;
    }
    return 0;
}
