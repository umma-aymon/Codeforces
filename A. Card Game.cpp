#include<bits/stdc++.h>
using namespace std;
int t,n,k1,k2,i,s1,s2,c1,c2,m;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k1>>k2;
        int a[k1],b[k2];
        for(i=0; i<k1; i++)
            cin>>a[i];
        for(i=0; i<k2; i++)
            cin>>b[i];
        sort(a,a+k1);
        sort(b,b+k2);
        m=min(k1,k2);
        c1=0,c2=0;
        for(i=0; i<n; i++)
        {
            if(m==k1)
            {
                if(a[i]>b[i])
                    c1++;
                else
                    c2++;
                m--;
            }
            else
            {
                {
                    if(b[i]>a[i])
                        c2++;
                    else
                        c1++;
                }
            }
        }
        if(c1>c2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
/*100
4 2 2
2 1
3 4
4 3 1
3 4 2
1
4 1 3
4
2 1 3
4 3 1
3 2 4
1
3 1 2
2
1 3
5 4 1
1 2 3 4
5
5 1 4
4
3 1 2 5
4 2 2
3 2
1 4
5 1 4
1
2 4 5 3
2 1 1
2
1
5 1 4
3
4 5 1 2
2 1 1
2
1
3 1 2
2
3 1
4 3 1
4 1 2
3
2 1 1
1
2
4 1 3
3
2 1 4
5 4 1
3 1 5 2
4
2 1 1
2
1
5 1 4
5
3 2 1 4
3 2 1
1 3
2
5 3 2
3 2 5
4 1
4 3 1
4 3 1
2
4 2 2
2 1
3 4
5 4 1
5 1 3 4
2
3 2 1
1 3
2
5 3 2
2 5 3
1 4
5 3 2
4 1 3
2 5
4 3 1
3 4 2
1
5 2 3
3 2
5 1 4
2 1 1
1
2

NO
YES
YES
YES
NO
NO
NO
NO
NO
YES
NO
YES
NO
YES
NO
NO
YES
YES
YES
YES
YES
YES
NO
YES
YES
YES
NO
YES
NO
NO
NO
NO
NO
NO
YES
YES
NO
YES
NO
YES
NO
NO
YES
YES
YES
YES
NO
YES
YES
NO
YES
NO
YES
NO
YES
YES
NO
NO
NO
YES
NO
NO
YES
NO
YES
NO
NO
NO
NO
YES
NO
YES
YES
NO
YES
NO
YES
NO*/
