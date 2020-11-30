#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int n,a,b,i,f;
vector<int>va;
vector<int>va2;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        va.pb(a);
        if(a!=b)
            f=1;
    }
    if(f)
        cout<<"rated\n";
    else if(!f)
    {
        va2=va;
        sort(va2.begin(),va2.end());
        reverse(va2.begin(),va2.end());
        for(i=0; i<n; i++)
            if(va[i]!=va2[i])
            {
                cout<<"unrated\n";
                f=1;
                break;
            }
        if(!f)
            cout<<"maybe\n";
    }
    return 0;
}
