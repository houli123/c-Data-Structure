#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int m, k;
    while (cin >> m >> k) {
        // int m = (int)s[0], k = (int)s[2];  // m表示充值m元，每充k元赠送一圆话费

        // 一些特殊情况的判定
        if (m == 0 && k == 0)
            break;
        else if (m == 0) {
            cout << 0 << endl;
            continue;
        }
        else if (k == 0) {
            cout << m << endl;
            continue;
        }

        int s = m;
        while (s >= k) {
            int divide = s / k, mod = s % k;
            m += divide;
            s = divide + mod;
        }
        cout << m << endl;
    }
    return 0;
}