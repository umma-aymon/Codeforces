#include<bits/stdc++.h>
using namespace std;
long long int l,r;
int main()
{
    cin>>l>>r;
    if(l%2!=0)
        l++;
    if(r-l<2)
        cout<<-1;
    else
        cout<<l<<" "<<l+1<<" "<<l+2;
    return 0;
}
