    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n;
        long long x;
        cin >> n;
        vector<long long> deck;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            deck.push_back(x);
        }

        sort(deck.begin(), deck.end());

        for (int i = 1; i < n; ++i) {
            if (deck[i] != deck[i - 1] + 1) {
                cout << "Scammed";
                exit(0);
            }
        }
        cout << "Deck looks good";
    }
