    #include <iostream>
    #include <vector>

    using namespace std;


    int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, m, o;
    cin >> n >> k >> m;
    vector<long long> v(n + 1);
    vector<long long> s(n + 1);
    v[0] = 1;
    for (int l =1; l <= m; l++){
        cin >> o;
        s[o]=1;

    }
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
        if(i-j>=0 && s[i]!=1){
        v[i] = (v[i] + v[i - j]) % 1000000007;
        }
    }
    }
    cout << v[n];
    return 0;
    }
