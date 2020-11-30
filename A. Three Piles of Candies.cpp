#include<bits/stdc++.h>
using namespace std;
long long int q,a,b,c,al,bob,d;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c;
        if(a%2==0)
            al=b+(a/2),bob=c+(a/2);
        else if(b%2==0)
            al=a+(b/2),bob=c+(b/2);
        else if(c%2==0)
            al=a+(c/2),bob=b+(c/2);
        else
            al=a+(c/2),bob=b+(c/2);
        if(al==bob)
            cout<<al<<endl;
        // cout<<al<<" "<<bob<<endl;
        else if(al>bob)
        {
            d=al-bob,bob+=d/2;
            cout<<bob<<endl;
        }
        else
        {
            d=bob-al,al+=d/2;
            cout<<al<<endl;
        }
    }
    return 0;
}
