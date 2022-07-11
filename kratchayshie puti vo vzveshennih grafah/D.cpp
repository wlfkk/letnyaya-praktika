#include <bits/stdc++.h>

using namespace std;

struct wedge {
    int u, v;
    int64_t w;
};

using pii = pair<int, int>;
using item = pair<int64_t, int>;
using wgraph = vector<vector<wedge>>;

const int64_t INF = 1e18;

vector<int64_t> deikstra(int start, const wgraph & g) {
    int n = g.size();
    vector<int64_t> d(n, INF);
    vector<bool> visited(n);
    set<item> s;
    d[start] = 0;
    for (int i = 0; i < n; ++i) {
        s.insert({ d[i], i });
    }
    while (!s.empty()) {
        int u = s.begin()->second;
        s.erase(s.begin());
        if (visited[u]) {
            continue;
        }
        visited[u] = true;
        for (wedge elem : g[u]) {
            int v = elem.v;
            int64_t w = elem.w;
            if (d[u] + w < d[v]) {
                s.erase({ d[v], v });
                d[v] = d[u] + w;
                s.insert({ d[v], v });
            }
        }
    }
    return d;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, start;
    cin >> n >> m >> start;
    --start;
    wgraph g(n);
    for (int i = 0; i < m; ++i) {
        int64_t w;
        int u, v;
        cin >> u >> v >> w;
        --u;
        --v;
        g[u].push_back({ u, v, w });
        g[v].push_back({ v, u, w });
    }

    vector<int64_t> d = deikstra(start, g);
    for (int64_t el : d) {
        if (el == INF) {
            cout << -1 << " ";
        }
        else {
            cout << el << " ";
        }
    }
    cout << endl;
    return 0;
}
