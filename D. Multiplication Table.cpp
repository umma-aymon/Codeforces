#include<bits/stdc++.h>
using namespace std;
long long int n,m,k,s,low,mid,high;
int main()
{
    cin>>n>>m>>k;
    low=1,high=m*n;
    while(low<high)
    {
        mid=(low+high)/2;
        s=0;
        for(int i=1; i<=min(n,k); i++)
            s+=min(mid/i,m);
        if(s>=k)
            high=mid;
        else
            low=mid+1;
    }
    cout<<low<<endl; //low==high
    return 0;
}
