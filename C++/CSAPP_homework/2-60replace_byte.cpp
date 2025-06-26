#include <iostream>
#include <climits>
#include <vector>

using namespace std;

// 从x中抽取最高有效字节
int get_msb(int x) {
    // shitf_val是一个整数，表示要将x右移多少位以获取最高有效字节
    int shift_val = (sizeof(int) - 1) << 3;
    int shift_x = x >> shift_val;  // 将x右移到最高有效字节的位置
    return shift_x & 0xFF;  // 取出最高有效字节
}

// 自己写的，但违规用了乘法
unsigned replace_byte (unsigned x, int i, unsigned b) {
    unsigned mask = 0xFF << (i * 8);
    b = b << (i * 8);
    return (x & ~mask) | b;
}

// 参考答案
unsigned replace_byte2(unsigned x, int i, unsigned char b) {
    int shift = i << 3;          // 计算字节i的移位量（8位/字节，左移3位即乘8）
    unsigned mask = ~(0xFF << shift);  // 构造掩码：除第i字节外全为1（清除第i字节的位）
    unsigned byte_b = (unsigned)b << shift;  // 将b移到第i字节的位置
    return (x & mask) | byte_b;  // 清除x的第i字节，再与b的字节进行或运算
}

int main() {
    int x = 0x12345678;
    int msb = get_msb(x);
    cout << "最高有效字节: " << hex << showbase << msb << endl;
    // cout << (0xFF<<1<<1<<1<<1);
    unsigned result = replace_byte2(x, 2, 0xAB);
    cout << "替换后的结果: " << hex << showbase << uppercase << result << endl;  // 输出结果为0x89AB12EF    
    result = replace_byte2(x, 0, 0xAB);
    cout << "替换后的结果: " << hex << showbase << uppercase << result << endl;  // 输出结果为0x89AB12EF    
    return 0;
}