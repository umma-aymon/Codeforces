#include<bits/stdc++.h>
using namespace std;
int n;
int m[6];
string s;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>s;
        m[s[0]]++;
    }
    cout<<m['C']*6+m['D']*12+m['I']*20+m['O']*8+m['T']*4<<endl;
    //cout<<m['C']<<" "<<m['D']<<" "<<m['I']<<" "<<m['O']<<" "<<m['T'];
    return 0;
}
