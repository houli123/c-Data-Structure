#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int int_shifts_are_arithmetic() {
    int x = -1; // 0xFFFFFFFF
    return (x >> 1) == -1;
}

int main() {
    cout << int_shifts_are_arithmetic() << endl;  // 经过试验，该机器是算数右移的机器
    return 0;
}