#include <bits/stdc++.h>
using namespace std;

bool isBigger(char a, char b) {
    return a - 'a' < b - 'a';
}

string lexGr(string str) {
    short length = str.length();
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length - 1; ++j) {
            if (!isBigger(str[j], str[j + 1])) {
                swap(str[j], str[j + 1]);
            }
        }
    }
    return str;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long n, counter = 0;
    string word;
    set<string> book;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> word;
        string newWord = lexGr(word);
        if (book.find(newWord) == book.end()) {
            book.insert(newWord);
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}
