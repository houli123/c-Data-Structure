#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, a, b;
    unordered_map<int, int> hashmap;  // 类似与python中的字典
    while (cin >> n) {
        for (int j = 0; j < n; j++) {
            cin >> a >> b;
            hashmap[a] = b;
        }
        for (auto &p: hashmap) {
            cout << p.first << ':' << p.second << endl;
        }
    }
    return 0;
}