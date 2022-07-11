    #include <bits/stdc++.h>

using namespace std;

using pi = pair<int, int>;

const int64_t INF = 1e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n;
    vector< vector<int64_t> > d(n+1, vector<int64_t>(n+1, INF));
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<n; ++j){
        int u, v;
        int64_t w;
        cin >> w;
        d[i][j]=w;
        }
    }
    for (int k = 0; k<n; ++k){
        for (int u = 0; u<n; ++u){
            for (int v= 0; v<n; ++v){
                d[u][v]=min(d[u][v],d[u][k] + d[k][v]);
            }
        }
    }
    for (int u = 0; u<n; ++u){
        for (int v = 0; v<n; ++v){
            cout << d[u][v] << ' ';
        }
        cout << endl;
    }

}
