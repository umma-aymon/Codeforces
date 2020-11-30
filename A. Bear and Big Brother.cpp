#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,y;
    cin>>a>>b;
    int cnt=0;
    while(1)
    {
        a=a*3;
        b=b*2;
        cnt++;
        //cout<<a<<" "<<b<<endl;
        if(a>b)
            break;
    }
    cout<<cnt;
    return 0;
}
