#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,flag=0;
    char s;
    vector<char>v;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>s;
            v.push_back(s);
        }
    }
    for(i=0; i<v.size(); i++)
    {
        if(v[i]=='C' || v[i]=='M' || v[i]=='Y')
        {
            cout<<"#Color"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"#Black&White"<<endl;
    return 0;
}
