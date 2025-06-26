#include <iostream>
#include <vector>

using namespace std;

// 判断是否运算能在没溢出的，没溢出则返回1
int uadd_ok(unsigned x, unsigned y) {
    int sum = x + y;
    return sum >= x && sum >= y;
}

int main() {
    unsigned x = 4294967290; // 最大值
    unsigned y = 1;
    if (uadd_ok(x, y)) {
        cout << "加法没有溢出" << endl;
    } else {
        cout << "加法溢出" << endl;
    }
    return 0;
}