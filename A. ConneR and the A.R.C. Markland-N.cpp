#include<bits/stdc++.h>
using namespace std;
int t,n,s,k,i,j,x,low,res,high,mid;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>k;
        vector<int>v;
        for(i=0; i<k; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        low=0;
        high=k;
        while(low<high)
        {
            mid=(low+high)/2;
            if(s>v[mid])
                low=mid+1;
            else
                high=mid;
        }
        res=0;
        for(i=mid; i>=0; i--)
            if(v[i]!=s)
            {
                res=i;
                break;
            }
        for(i=mid; i<n; i++)
            if(v[i]!=s)
            {
                res=min(res,abs(s-i));
                break;
            }
        cout<<res<<endl;
        v.clear();
    }
    return 0;
}
