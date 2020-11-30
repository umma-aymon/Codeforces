#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,i,a[1010],s;
    // double s;
    cin>>k;
    while(k--)
    {
        cin>>n;
        //s=ceil(n/2.0);
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        s=1;
        for(i=n-1; i>=0; i--)
        {
            if(s<=a[i])
                s++;
            //cout<<a[i]<<" ";
        }
        cout<<s-1<<endl;
    }
    return 0;
}
