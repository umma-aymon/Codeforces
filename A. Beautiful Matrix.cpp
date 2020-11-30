#include<bits/stdc++.h>
using namespace std;
int i,j,cnt,a[5][5];
int main()
{
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
                cnt=abs(2-i)+abs(2-j);
        }
    cout<<cnt<<endl;
    return 0;
}
