    #include <iostream>
    #include <vector>
    using namespace std;
    int main()
    {
      ios::sync_with_stdio(false);
      cin.tie(0);

      int n, q, l, r;
      cin >> n;
      vector<long long> v(n+1);
      for (int i = 0; i < n; i++)
      {
        cin >> v[i];
      }
      vector<long long> s(n + 1);
      s[0] = 0;
      for (int i = 1; i < n + 1; i++)
      {
        s[i] = s[i - 1] + v[i - 1];
      }
      cin >> q;
      for (int i = 0; i < q; i++)
      {
        cin >> l >> r;
        cout << s[r] - s[l-1] << endl;
      }
    }
