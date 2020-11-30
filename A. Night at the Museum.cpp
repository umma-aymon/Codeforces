#include<bits/stdc++.h>
using namespace std;
string s;
int i,ans,ch='a',x;
int main()
{
    cin>>s;
    for(i=0; i<s.length(); i++)
    {
        x=s[i];
        //cout<<abs(x-ch)<<" ";
        if(abs(x-ch)>26-abs(x-ch))
            ans+=26-abs(x-ch);
        else
            ans+=abs(x-ch);
        ch=x;
    }
    cout<<ans;
    return 0;
}
/* a to m 12 clockwise and anticlockwise 14
total distance 26 theke current char er distance
 baad dle sheta calue jdi choto hoy anticlockwise
 gele vlo hbe naile clockwise krbo*/
