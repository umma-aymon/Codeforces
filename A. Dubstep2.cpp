#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin>>s;
    int f= s.find("WUB");
    while(f!=-1)
    {
        s.replace(f,3," ");
        f= s.find("WUB");
    }
    cout<<s;
    return 0;
}
