    #include <iostream>
    #include <vector>

    using namespace std;


    int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<long long> v(n + 1);
    v[0] = 1;
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= min(i, k); j++) {
    v[i] = (v[i] + v[i - j]) % 1000000007;
    }
    }
    cout << v[n];
    return 0;
    }
