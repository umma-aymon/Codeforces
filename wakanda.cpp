#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, t) for (int i = s; i < t; ++i)
#define FOE(i, s, t) for (int i = s; i <= t; i++)
#define FOR(i, s, t) for (int i = s; i < t; i++)
#define FOD(i, s, t) for (int i = s; i >= t; i--)
#define sz(x) (int)(x).size()
#define LL long long
#define mp make_pair
#define pb push_back
int matchings[2001];
int pref[2001][2001];
int revpos[2001][2001];
void cpp_wrapper_irving(int N)
{
    int proposal_to[N];
    int proposal_from[N];
    int proposed_to[N];
    FOR(i, 0, N) proposal_to[i] = N;
    FOR(i, 0, N) proposal_from[i] = N;
    FOR(i, 0, N) proposed_to[i] = 0;
    bool stable = false;
    while (!stable)
    {
        stable = true;
        for (int n = 0; n < N; n++)
        {
            if (proposed_to[n] >= N-1)
            {
                return;
            }
            if (proposal_to[n] == N)
            {
                int proposee = pref[n][proposed_to[n]];
                int op = revpos[proposee][n];
                int op_curr = N;
                if (proposal_from[proposee] != N)
                    op_curr = revpos[proposee][proposal_from[proposee]];
                if (op < op_curr)
                {
                    proposal_to[n] = proposee;
                    if (proposal_from[proposee] != N)
                    {
                        proposal_to[proposal_from[proposee]] = N;
                        stable = false;
                    }
                    proposal_from[proposee] = n;
                }
                else
                    stable = false;
                proposed_to[n]++;
            }
        }
    }
    std::vector< std::deque<int> > table(N, std::deque<int>(N-1));
    for (int n = 0; n < N; ++n)
        for (int i=0; i<N-1; i++)
            table[n][i] = pref[n][i];
    for (int n = 0; n < N; n++)
    {
        for (int i = table[n].size()-1; i>= 0; i--)
        {
            if (table[n][i] == proposal_from[n])
                break;
            else
            {
                if (table[n].size() == 0)
                {
                    return;
                }
                bool erased = false;
                for (int j = 0; j < table[table[n].back()].size(); j++)
                {
                    if (table[table[n].back()][j] == n)
                    {
                        table[table[n].back()].erase(table[table[n].back()].begin() + j);
                        erased = true;
                        break;
                    }
                }
                if (!erased)
                {
                    return;
                }
                table[n].pop_back();
            }
        }
    }
    stable = false;
    while(!stable)
    {
        stable = true;
        for (int n = 0; n < N; n++)
        {
            if (table[n].size() > 1)
            {
                stable = false;
                std::vector<int> x;
                std::vector<int> index;
                int new_index = n;
                int rot_tail = static_cast<int>(-1);
                while (rot_tail == (int) (index.end() - index.begin() - 1))
                {
                    int new_x = table[new_index][1];
                    new_index = table[new_x].back();
                    rot_tail = find(index.begin(), index.end(), new_index) - index.begin();
                    x.push_back(new_x);
                    index.push_back(new_index);
                }
                for (int i = rot_tail + 1; i < index.size(); i++)
                {
                    while(table[x[i]].back() != index[i-1])
                    {
                        int tab_size = table[table[x[i]].back()].size();
                        table[table[x[i]].back()].erase(std::remove(table[table[x[i]].back()].begin(), table[table[x[i]].back()].end(),x[i]), table[table[x[i]].back()].end());
                        if (tab_size == table[table[x[i]].back()].size())
                        {
                            return;
                        }
                        if (table[x[i]].size() == 1)
                        {
                            return;
                        }
                        table[x[i]].pop_back();
                    }
                }
            }
        }
    }
    for (int i = 0; i < table.size(); i++)
        if (table[i].empty())
        {
            return;
        }
    for (int n = 0; n < N; n++)
        matchings[n] = table[n][0];
    return ;
}
#define K 2001
int n;
int a[K][K];
int exi[K], ans[K];
vector<pair<int, int> > V;
int main()
{
    scanf("%d", &n);
    FOE(i, 1, n) FOE(j, 1, n) if (i != j)
        scanf("%d", &a[i][j]);
    if (n % 2)
    {
        puts("-1");
        return 0;
    }
    FOE(i, 1, n)
    {
        V.clear();
        FOE(j, 1, n) if (i != j)
            V.pb(mp(a[i][j], j));
        sort(V.begin(), V.end());
        FOR(j, 0, V.size())
        {
            int id = V[j].second;
            pref[i - 1][j] = id - 1;
            revpos[i - 1][id - 1] = j;
        }
    }
    cpp_wrapper_irving(n);
    int ok = 0;
    FOE(i, 1, n) if (matchings[i] != 0)
        ok = 1;
    if (!ok)
    {
        puts("-1");
        return 0;
    }
    FOE(i, 1, n)printf("%d\n", matchings[i - 1] + 1);
}
