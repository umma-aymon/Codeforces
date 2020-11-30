#include<bits/stdc++.h>
using namespace std;
//long long int prime[100000000];
vector<bool> prime(1000000000000000000+1,0);
void sieve()
{
    long long int i,j,r;
    r=sqrt(1000000000000000000 );
    prime[0]=prime[1]=1;
    for(i=2; i<=r; i++)
    {
        if(prime[i]==0)
        {
            for(j=i*i; j<1000000000000000000 ; j+=i)
                prime[j]=1;
        }
    }
}
int main()
{
    sieve();
    int t,p,flag;
    long long int x,y,s;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>x>>y;
        s=x-y;
        flag=0;
        for( p=2;; p++)
        {
            if (prime[p]==0)
            {
                if((s%p)==0)
                {
                    flag=1;
                    break;
                }
            }
            else
                flag=0;
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    //cout<<(1%2);
    return 0;
}
