#include <bits/stdc++.h>

using namespace std;

using pii = pair<int, int>;
using graph = vector<vector<int>>;

void dfs(int u, const graph & g, vector<bool> & visited, int & counter, vector<int> & when) {
    if (visited[u]) {
        return;
    }
    when[u] = counter;
    counter++;
    visited[u] = true;
    for (int v : g[u]) {
        //cout << v << ' ';
        dfs(v, g, visited, counter, when);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    graph g(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<bool> visited(n + 1);
    vector<int> when(n + 1, -10);
    int counter = 0;
    dfs(--k, g, visited, counter, when);
    for (int i = 0; i < n; ++i) {
        if (visited[i]) {
            cout << when[i] << ' ';
        }
        else {
            cout << -1 << ' ';
        }
    }
    return 0;
}
