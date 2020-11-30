#include<bits/stdc++.h>
using namespace std;
long long n,i,cnt,x;
char ch;
int main()
{
    cin>>n>>x;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>ch>>a[i];
        if(ch=='+')
            x+=a[i];
        else if(ch=='-')
        {
            if(x>=a[i])
                x-=a[i];
            else
                cnt++;
        }
    }
    cout<<x<<" "<<cnt<<endl;
    return 0;
}

