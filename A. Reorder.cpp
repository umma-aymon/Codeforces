#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int sum=0;
        while(n--)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<(sum==m?"YES":"NO")<<endl;
    }
    return 0;
}
