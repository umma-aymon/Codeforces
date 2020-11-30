#include<bits/stdc++.h>
using namespace std;
int a,b,x;
int main()
{
    cin>>x;
    if(x==1)
        cout<<-1<<endl;
    else if(x==2 || x==3)
        cout<<"2 2";
    else if(x==5)
        cout<<"4 2";
    else
    {
        b=ceil(sqrt(x));
        a=b*2;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
