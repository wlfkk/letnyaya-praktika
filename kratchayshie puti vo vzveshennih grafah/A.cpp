#include <bits/stdc++.h>

using namespace std;

using pii = pair<int, int>;
const int64_t INF = 1e18;
struct wedge {
	int u, v;
	int64_t w;
};


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, start;
	cin >> n >> m >> start;

	vector<wedge> g;

	for (int i = 0; i < m; i++) {
		int u, v;
		int64_t w;
		cin >> u >> v >> w;
		--v;
		--u;
		g.push_back({ u,v,w });
		g.push_back({ v,u,w });
	}

	start--;

	vector<int64_t> d(n, INF);
	d[start] = 0;
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		flag = false;
		for (wedge elem : g) {
			int u = elem.u;
			int v = elem.v;
			int64_t w = elem.w;
			if (d[u] + w < d[v]) {
				flag = true;
				d[v] = d[u] + w;
			}
		}
		if (!flag) {
			break;
		}

	}
	if (flag) {
		cout << "Negative cycle";

	}
	else {
		for (int64_t elem : d)
		{
			if (elem == INF) cout << "-1" << " ";
			else cout << elem << ' ';
		}
		cout << "\n";
	}

}
