#include<bits/stdc++.h>
using namespace std;
long long int n,cnt,i,t,j,flag;
string s;
char ch;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=1&&n<=9)
            cout<<n<<endl;
        else
        {
            cnt=9;

            for( i=10; i<=n; i++)
            {
                flag=1;
                stringstream mystream;
                mystream<<i;
                s=mystream.str();
                cout<<s<<" ";
                // cout<<s<<" ";
               // ch=s[0];
                cout<<ch<<" ";
                for( j=1; j<s.size(); j++)
                {
                    if(s[i]!=s[0])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    cnt++;
            }
            cout<<cnt<<endl;
        }

    }
    return 0;
}
