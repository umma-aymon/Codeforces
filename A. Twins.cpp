#include <bits/stdc++.h>
using namespace std;
int n, i, s,s2,cnt;
int main()
{
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i],s+=a[i];
    sort(a, a + n);
    for (i = n-1; i >= 0; i--)
    {
        s2 += a[i],cnt++;
        if (s2*2 > s)
            break;
    }
    cout <<cnt << endl;
    return 0;
}
