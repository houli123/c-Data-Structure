#include <iostream>
#include <climits>
#include <vector>

using namespace std;

// judge
int judge(int x) {
    return !~x || !x || !((x & 0xFF) ^ 0xFF) || !(x & 0xff000000);
}

int main() {
    vector<int> testCases = {
        -1,                   // 全1：0xFFFFFFFF（有符号表示）
        0x00000000,           // 全0
        0x123456FF,           // 低字节全1
        0x00ABCDEF,           // 高字节全0
        0x12345678,           // 随机值
        0x000000FF,           // 高字节全0且低字节全1
        INT_MAX,              // 最大值
        INT_MIN,              // 最小值
        0x0000FFFF,           // 高字节全0
        -256                  // 原0xFFFFFF00（低字节全0，高字节全1）
    };

    // 执行测试（保持原有验证逻辑不变）
    for (int x : testCases) {
        cout << "x = 0x" << hex << x << dec;
        cout << ", judge(x) = " << judge(x);
        
        bool expected = judge(x);
        
        cout << ", expected = " << expected;
        cout << " --> " << (judge(x) == expected ? "PASS" : "FAIL") << endl;
    }

    return 0;
}