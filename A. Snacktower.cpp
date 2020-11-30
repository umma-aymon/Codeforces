#include<bits/stdc++.h>
using namespace std;
int n,i,j,a;
set<int>s;
set<int>::reverse_iterator rit;
int main()
{
    cin>>n;
    int n2=n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a==n2)
        {
            s.insert(a);
            for(rit=s.rbegin(); rit!=s.rend(); )
            {
                int val=*rit;
                if(val==n2)
                {
                    cout<<val<<" ";
                    n2--;
                    s.erase(val);
                }
                else
                    break;
            }
            cout<<"\n";
        }
        else
        {
            cout<<"\n";
            s.insert(a);
        }
    }
    return 0;
}
