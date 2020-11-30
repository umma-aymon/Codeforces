#include<bits/stdc++.h>
using namespace std;
int n,i;
int main()
{
    cin>>n;
    if(n & 1)
    {
        cout<<-1;
        return 0;
    }
    for(i=1; i<n; i+=2)
        cout<<i+1<<" "<<i<<" ";
    return 0;
}
