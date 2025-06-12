#include <iostream>
#include <climits>
#include <vector>

using namespace std;
// 2.63
unsigned srl(unsigned x, int k) {
    // Perform shift arithmeticall
    unsigned xsra = (int) x >> k;  // 当前是算术右移
    int w = sizeof(int) << 3;
    // 想办法完成逻辑右移：算数右移的高k位为1/0，那只需要将高k位转换成0，强制变成0即可实现逻辑右移
    // (1 << (w - k))
    return 1;
}

unsigned sra(int x, int k) {
    // Perform shift logicall
    int xsral = (unsigned) x >> k;  // 当前是逻辑右移
    int w = sizeof(int) << 3;
    // 想办法完成算术右移

    return 1;
}

// 2.64
int any_odd_one(unsigned x) {
    // Return 1 when any odd bit of x equals 1; 0 otherwise
    // 计算机中，位的编号通常从0 开始（从右往左，最低有效位为第 0 位）
    return !(0xAAAAAAAA ^ (x & 0xAAAAAAAA));
}

// 2.65
//Return 1 when x contains an odd number of 1s; 0 otherwise
int odd_ones(unsigned x) {
    return !!(x & 0xaaaaaaaa);
}

// 2.66
/*
* Generate mask indicating leftmost 1 in x. Assume w=32.
* For example, OxFFOO -> Ox8000, and Ox6600 --> Ox4000.
* If x = 0, then return 0.
*/
int leftmost_one(unsigned x) {
    
}

int main() {
    unsigned x = 0xFFFFFFFF;
    cout << srl(x, 1) << endl; // 期望输出: 0x7FFFFFFF
    cout << sra(x, 1) << endl; // 期望输出: 0xFFFFFFFF
    cout << any_odd_one(0xBBBBBBB9) << endl; // 期望输出: 1
    cout << odd_ones(9) << endl; // 期望输出: 1
    cout << '-' << endl;
    cout << (!0) << endl;
    cout << (0xffffffff >> 1) << endl;
    cout << (~0u >> 1) << endl;
    cout << !(0xAAAAAAAA ^ (0xFFFFFFFD & 0xAAAAAAAA)) << endl;
    cout << (~(-1)) << endl; 
    return 0;
}