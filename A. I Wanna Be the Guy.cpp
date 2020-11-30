#include<bits/stdc++.h>
using namespace std;
int n,p,q,a,i;
set<int>s;
int main()
{
    cin>>n>>p;
    for(i=0; i<p; i++)
    {
        cin>>a;
        s.insert(a);
    }
    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>a;
        s.insert(a);
    }
    if(accumulate(s.begin(),s.end(),0)==(n*(n+1))/2)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";
    return 0;
}
