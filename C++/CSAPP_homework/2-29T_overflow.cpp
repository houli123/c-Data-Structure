#include <iostream>
#include <vector>

using namespace std;

// 如果参数x和y相加不会产生溢出，这这个函数返回1
int tadd_ok(int x, int y) {
    int s = x + y;
    if (x > 0 && y > 0 && s <= 0) {
        return 0; // 正数相加溢出
    } else if (x < 0 && y < 0 && s >= 0) {
        return 2; // 负数相加溢出
    }
    return 1;
}
int main() {
    // 负溢出的例子
    int x = -2147483648; // 最大值
    int y = -1;
    if (tadd_ok(x, y) == 1) {
        cout << "没有溢出" << endl;
    } else if (tadd_ok(x, y) == 2) {
        cout << "负溢出" << endl;
    } else {
        cout << "正溢出" << endl;
    }
    return 0;
}