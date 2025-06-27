#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main() {
    int x = 0x89ABCDEF;  // 0x89ABCDEF是一个32位整数
    int y = 0x76543210;  // 0x76543210是另一个32位整数
    cout << hex << showbase << uppercase << ((x & 0xFF)|(y & ~0xFF));  // 输出结果为0x765432EF
    cout << '\n';
    return 0;
}