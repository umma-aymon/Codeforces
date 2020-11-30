#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,m;
    cin>>n;
    m=0;
    c=0;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
            m++;
        else if(a<b)
            c++;
    }
    if(m>c)
        cout<<"Mishka\n";
    else if(m<c)
        cout<<"Chris\n";
    else
        cout<<"Friendship is magic!^^\n";
    return 0;
}
