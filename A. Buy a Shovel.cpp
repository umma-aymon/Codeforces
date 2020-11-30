#include<bits/stdc++.h>
using namespace std;
int k,r,i;
int main()
{
    cin>>k>>r;
    for(i=1;; i++)
        if(i*k%10==0 || i*k%10==r)
        {
            cout<<i;
            break;
        }
    return 0;
}
