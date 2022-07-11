    #include <iostream>
    using namespace std;
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        long long a, b, c, i;
        b=0;
        cin >> c;
        for (i=0; i<c; i++){
        cin >> a;
        b=b+a;
        }
        cout << b << endl;
    }
