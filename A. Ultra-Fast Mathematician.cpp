#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    //char c[100];
   // vector<int>c;
   // vector<string>c;
    cin>>a>>b;
    char c[a.length()]; // tarpor o garbage :3.loop use kra e vlo
   // cout<<a.length()<<" "<<a.size();
    for(int i=0; i<a.length(); i++)
    {
       if(a[i]!=b[i])
       //     c.push_back("1"); //vector<char>c declare krle c.pb('1') use krte hbe :3//
        c[i]='1'; //eta use krte chaile char c[100] declare krte hbe//
        else
            //c.push_back("0");
        c[i]='0';
    }
    for(int i=0; i<a.size(); i++)
        cout<<c[i];
     // cout<<c; //eta disi r c te j last index gula khali roi gese ogular garbage gula print krtce :3
    return 0;
}
