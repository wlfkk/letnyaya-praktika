 #include <bits/stdc++.h>

using namespace std;

const int MAX_N = 5*1e5;

const long long P = 31;
const long long MOD = 1e9 + 7;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);

vector <long long> pows(MAX_N);
pows[0] = 1;
for (int i = 1; i < MAX_N; i++) {
pows[i] = (pows[i - 1] * P) % MOD;
}

string s1, s2;
cin >> s1 >> s2;
int n = s1.size(), m = s2.size();
long long psi = 0;
for (int i = 0; i < m; i++) {
psi = (psi + (s2[i] - 'a' + 1) * pows[m - 1 - i]) % MOD;
}
vector <long long> h(n + 1);
for (int i = 0; i < n; i++)
{
h[i + 1] = ((h[i] * P) % MOD + (s1[i] - 'a' + 1)) % MOD;
}


int cnt = 0;
for (int i = 0; i <= n - m; i++) {
int l = i + 1;
int r = i + m;
long long h2 = (h[r] - (pows[m] * h[l - 1]) % MOD + MOD) % MOD;
if (psi == h2)
cnt++;
}
if (cnt == 0)
cout << "NIE";
else
cout << "TAK\n" << cnt;
}
