#include<bits/stdc++.h>
using namespace std;
string a,b;
int i,len,cnt;
int main()
{
    cin>>a>>b;
    if(a==b)
        cout<<-1;
    else
        cout<<max(a.length(),b.length());
    return 0;
}
