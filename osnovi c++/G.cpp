    #include <iostream>
    #include <string>
    using namespace std;
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        long long i;
        int a, b, c, d, e, k, o, l[10];
        cin >> k;
        for (i=0; i<k; i++){
            cin >> l[i];
        }
        for (i=0; i<k; i++){
            o=l[i];
            a=o/5000;
            b=(o-a*5000)/1000;
            c=(o-a*5000-b*1000)/500;
            d=(o-a*5000-b*1000-c*500)/200;
            e=(o-a*5000-b*1000-c*500-d*200)/100;
            cout << e << " " << d << " " << c << " " << b << " " << a << endl;
            a=0;
            b=0;
            c=0;
            d=0;
            e=0;
        }
    }
