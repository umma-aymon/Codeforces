#include <bits/stdc++.h>
#define ll long long
using namespace std ;
ll n, a, t ;
int main ()
{
    ios_base :: sync_with_stdio ( false );
    cin . tie ( NULL );
    cout . tie ( NULL );
    cin >> t ;
    while ( t--)
    {
        cin >> n ;
        a=0;
        for ( ll j = 1 ; j <= n ; j=j*2 )
            a+= j;
        cout << a-(n*(n+1)/2)-1 << endl ;
    }
    return 0 ;
}
/* 2
4
1000000000
 while(t--){
        cin>>n;
        cout<<n*(n+1)/2-2*ll(pow(2, int(log2(n))+1)-1)<<'\n';
    }*/
