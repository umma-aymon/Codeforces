#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,yy,v,i;
    vector<int>a,a2;
    cin>>y;
    i=1;
    while(1)
    {
        yy=0,v=0;
        yy=y+i;
        v=(yy%10);
        yy=yy/10;
        a.push_back(v);
        v=(yy%10);
        yy=yy/10;
        a.push_back(v);
        v=(yy%10);
        yy=yy/10;
        a.push_back(v);
        v=(yy%10);
        a.push_back(v);
        a2=a;
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        if(a.size()==4)
            break;
        i=i+1;
        a.clear();
        a2.clear();
    }
    cout<<a2[3]<<a2[2]<<a2[1]<<a2[0];
    return 0;
}
