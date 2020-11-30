#include<bits/stdc++.h>
using namespace std;
int n,i;
int main()
{
    cin>>n;
    if(n==1 || n==2)
        cout<<-1;
    else
        for(i=n; i>=1; i--)
            cout<<i<<" ";
    return 0;
}
