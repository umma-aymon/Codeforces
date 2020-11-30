#include<bits/stdc++.h>
using namespace std;
char a[400][400];
set<char>s;
int n,i,j,cnt,flag;
char ch;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
            s.insert(a[i][j]);
        }
    if(s.size()==2)
    {
        ch=a[0][0];
        int c2=count(a,a+n,ch);
        cout<<c2<<endl;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                if(i==j || (i+j+1)==n)
                {
                    if(a[i][j]!=ch)
                    {
                        flag=1;
                        break;
                    }
                    else
                        cnt++;
                }
            }
        if(flag)
            cout<<"NO\n";
        else if(flag==0 && cnt==(n+n-1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
