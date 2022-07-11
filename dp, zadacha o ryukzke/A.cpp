#include <bits/stdc++.h>


using namespace std;

using pii = pair<int, int>;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string first, second;
    cin >> first >> second;
    long long n = first.size(), m = second.size();
    vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (first[j - 1] == second[i - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    /*for (int i = 0; i < m + 1; ++i) {
        cout << endl;
        for (int j = 0; j < n + 1; ++j) {
            cout << dp[i][j] << ' ';
        }
    }  */
    cout << dp[m][n] << endl;

    return 0;
}
