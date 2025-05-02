#include <iostream>
using namespace std;

int main() {
    int N, M, s, t;
    while (cin >> N) {
        for (int i = 0; i < N; i++) {
            s = 0;
            cin >> M;
            for (int j = 0; j < M; j++) {
                cin >> t;
                s += t;
            }
            cout << s;
            if (i == N - 1)   // 最后一个只需要一个\N
                cout << endl;
            else
                cout << "\n\n";
        }
    }
    return 0;
}