#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,left,right;
    string pos;
    cin>>len>>pos;
    sort(pos.begin(), pos.end());
    left=count(pos.begin(),pos.end(),'L');
    right=count(pos.begin(),pos.end(),'R');
    cout<<left+right+1<<endl;
    return 0;
}
