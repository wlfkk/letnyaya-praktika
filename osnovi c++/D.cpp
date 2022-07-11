   #include <iostream>
        using namespace std;
        int main(){
        long long a, b;
        int i;
        b=1;
        cin >> a;
        for (i=1; i<=a; i++){
        b=b*i;
        b %= (int)1e9 + 7;
        }
        cout << b << endl;
    }
