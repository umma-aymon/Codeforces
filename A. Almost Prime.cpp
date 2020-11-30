#include <bits/stdc++.h>
#define mx 100000005
#define ll long long int
using namespace std;
bool flag[3030];
int cnt[3030];
void sieve()
{
    for (int i = 2; i <= 3000; i++)
    {
        if (flag[i])
            continue;
        for (int j = i * 2; j <= 3000; j += i)
        {
            flag[j] = true;
            cnt[j]++;
        }
        cnt[i] = 1;
    }
}
int main()
{
    sieve();
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (cnt[i] == 2)
            ans++;
    cout << ans << endl;
    return 0;
}
