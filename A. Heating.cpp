#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt,s;
    double d,c,sum;
    cin>>n;
    while(n--)
    {
        cin>>c>>sum;
        d=(sum/c);
        cout<<d<<" ";
        cnt=1;
        s=0;
        while(cnt*d<=sum)
        {
            s=s+(d*d);
            cnt++;
        }
        cout<<s<<endl;
    }
    return 0;
}
