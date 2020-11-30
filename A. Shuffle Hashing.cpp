#include<bits/stdc++.h>
using namespace std;
int t,s1,p1,j;
string s,p,s2;
char ch;
int main()
{
    int flag=0,c=0;
    cin>>t;
    while(t--)
    {
        cin>>s>>p;
        s1=s.length();
        p1=p.length();
        if(p1<s1)
            cout<<"NO\n";
        else if(p1==s1)
        {
            sort(s.begin(),s.end());
            sort(p.begin(),p.end());
            if(s==p)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

        else
        {

            for(int i=0; i<p1; i++)
            {
                ch=p[i];
                if(s.find(ch))
                {
                    cout<<c<<" ";
                    s2=p.substr(c,s1);
                    cout<<s2<<" ";
                    /*if(s==s2)
                    {
                        cout<<"YES\n";
                        flag=1;
                        break;
                    }*/
                }
                else
                    c++;
            }
            if(flag==0)
                cout<<"NO\n";
        }
    }
    return 0;
}
