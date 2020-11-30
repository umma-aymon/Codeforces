#include <bits/stdc++.h>
using namespace std;
int t,n,i;
vector<int>v[100];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            int d=abs(a[i]-a[i+1]);
            v[d].push_back(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
                cout << v[i][j] << " ";
            cout<<endl;
        }
    }
    return 0;
}
