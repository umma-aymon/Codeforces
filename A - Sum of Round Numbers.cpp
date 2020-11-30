#include<bits/stdc++.h>
using namespace std;
int t,n,i,a[5],cnt;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        i=0,cnt=0;
        while(n)
        {
            if(n%10)
                cnt++,a[i]=n%10,i++;
            else
                a[i]=n%10,i++;
            n/=10;
        }
        cout<<cnt<<endl;
        int j=1;
        for(i=0; i<5; i++)
        {
            if(a[i])
                cout<<a[i]*j<<" ";
            j=j*10;
        }
        cout<<endl;
        fill(a, a+5, 0);
    }
    return 0;
}
