#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

const long long int INF = 1e15;

void bfs(int start, vector<vector<int>> &g, vector<long long int> &d, vector<int> &p)
{
    d[start] = 0;
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : g[u])
        {
            if (d[v] == INF)
            {
                d[v] = d[u] + 1;
                p[v] = u;
                q.push(v);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, vertex;
    cin >> n >> m >> vertex;
    vector<vector<int>> g(n);
    vertex--;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int start = vertex - 1;
    vector<long long int> d(n, INF);
    vector<int> p(n, -1);
    bfs(vertex, g, d, p);
    for (int i = 0; i < n; i++)
    {
        if (d[i] == INF)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << d[i] << " ";
        }
    }
    return 0;
}
