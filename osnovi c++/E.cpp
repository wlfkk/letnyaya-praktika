    #include <iostream>
    using namespace std;
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        string str;
        cin >> str;
        long long a, k, l, s;
        s=0;
        k=a;
        for (int i=0; i<str.size(); i++){
            if (str[i]=='0' || str[i]=='4' || str[i]=='6' || str[i]=='9'){
                s=s+1;
            }
            if (str[i]=='8'){
                s=s+2;
            }
        }
        cout << s << endl;
    }
