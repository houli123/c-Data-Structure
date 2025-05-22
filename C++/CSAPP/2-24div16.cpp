#include <iostream>
#include <vector>

using namespace std;

int div16(int x) {
    int sign = x >> 31; // 取符号位
    int bias = sign & 15; // 如果是负数，bias=1，否则bias=0
    return (x + bias) >> 4; // 加上bias后右移4位
}

int main() {
    int num = 99;
    cout << "Division of " << num << " by 16 is: " << div16(num) << endl;
    return 0;
}