#include<bits/stdc++.h>
using namespace std;
int n,k,m;
char ch='a';
string s,s2,s3;
int main()
{
    cin>>n>>k;
    m=n-k+1;
    while(k--)
    {
        s+=ch;
        ch++;
    }
    while(m--)
        s2+=s;
    //,cout<<s2<<endl
    s3=s2.substr(0,n);
    cout<<s3;
    return 0;
}
