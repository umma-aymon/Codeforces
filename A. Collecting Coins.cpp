#include<bits/stdc++.h>
using namespace std;
int t,a[4],n;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a,a+3);
        //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" ";
        n=n-((a[2]-a[0])+(a[2]-a[1]));
        //cout<<n<<endl;
        if(n>=0 && n%3==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
