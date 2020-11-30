#include<bits/stdc++.h>
using namespace std;
int n,an,dan;
int main()
{
    string s;
    cin>>n;
    cin>>s;
    an=count(s.begin(),s.end(),'A');
    dan=n-an;
    if(an>dan)
        cout<<"Anton";
    else if(an<dan)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
