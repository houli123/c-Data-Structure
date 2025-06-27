#include <iostream>
#include <cassert>
using namespace std;

//2.71
typedef unsigned packet_t;
// 该函数的作用是取出一个字中的某个字节，然后把该字节扩展为有符号整数
// 难点在于如何利用算数右移填充前边的位
// 核心思想就是先把目前字节左移到最高位，然后再利用算数右移
int xbyte(packet_t word, int bytenum) {
    int size = sizeof(unsigned);
    int shift_left_val = (size - 1 - bytenum) << 3;
    int shift_right_val = (size - 1) << 3;
    return (int)word << shift_left_val >> shift_right_val;
}

// 2. 73 写出具有如下原型的函数的代码：
//  Addition that saturates to TMin or TMax•I
// 编写饱和加法，同正常的补码加法溢出的方式不同，当正溢出时，饱和加法返回TMAX，负溢出时，返回TMIN，饱和运算常常用于在执行数字信号处理的程序中。
int saturating_add(int x, int y) {
    int sum = x + y;

    // 得到x 和 y 的符号位右移而成的掩码，0xff..f 表示的是负值，0x0 表示的是正值
    int x_sign_mask = x >> ((sizeof(int) << 3) - 1);
    int y_sign_mask = y >> ((sizeof(int) << 3) - 1);
    int sum_sign_mask = sum >> ((sizeof(int) << 3) - 1);

    // 接下来讨论正溢出和负溢出的情况：
    // 正溢出：当x > 0, y > 0时, sum < 0，即 x + y > sum
    // 当 x_sign_mask 和 y_sign_mask 都为 0x0(正值) ，sum_sign_mask 为 0xff.. （负值）的时候，此时必然是正溢出
    int pos_ovf = !x_sign_mask && !y_sign_mask && sum_sign_mask;   

    // 负溢出：当x < 0, y < 0时, sum > 0，即 x + y < sum
    // 当 x_sign_mask 和 y_sign_mask 都为 0xff..(负值) ，sum_sign_mask 为0（正值）的时候，此时必然是负溢出
    int neg_ovf = x_sign_mask && y_sign_mask && !sum_sign_mask;  

    // int positive_overflow = ~x_sign_mask & ~y_sign_mask & sum_sign_mask;
    // int negative_overflow = x_sign_mask & y_sign_mask & ~sum_sign_mask;

    // 构造选择掩码：溢出时为1，否则为0
    int ovf = pos_ovf | neg_ovf;

    // 正确选择结果：溢出时返回边界值，否则返回sum
    return ovf ? (pos_ovf ? INT_MAX : INT_MIN) : sum;
}

//  2. 74 写出具有如下原型的函数的代码：
// I* Determine whether arguments can be subtracted without overflow *I
// 如果计算 x-y 不溢出，这个函数就返回 1 。
int tsub_ok(int x, int y) {
    int diff = x + (~y + 1);
    // 得到x 和 y 的符号位右移而成的掩码，0xff..f 表示的是负值，0x0 表示的是正值
    int w = (sizeof(int) << 3) - 1;
    int x_sign = x >> w;
    int y_sign = y >> w;
    int diff_sign = diff >> w;

    // 正溢出：x为正，y为负，且差值为负
    int pos_overflow = (!x_sign && y_sign && diff_sign);
    
    // 负溢出：x为负，y为正，且差值为正
    int neg_overflow = (x_sign && !y_sign && !diff_sign);
    
    // 溢出时返回0，否则返回1
    return !(pos_overflow || neg_overflow);
}

int main(void) {
    cout << (xbyte(0x00112233, 2) == 0x11) << endl;

    // 正常加法（无溢出）
    cout << "1 + 5 = " << saturating_add(1, 5) << endl;            // 输出: 6
    // 正溢出场景
    cout << "INT_MAX + 1 = " << saturating_add(INT_MAX, 1) << endl; // 输出: 2147483647 (INT_MAX)
    // 负溢出场景
    cout << "INT_MIN + (-1) = " 
         << saturating_add(INT_MIN, -1) << endl;                     // 输出: -2147483648 (INT_MIN)

    // 正常减法（无溢出）
    cout << "5 - 3 = " << tsub_ok(5, 3) << endl;           // 输出: 1（不溢出）
    // 正溢出
    cout << "INT_MAX - INT_MIN = " << tsub_ok(INT_MAX, INT_MIN) << endl; // 输出: 0（溢出）
    
    // 负溢出
    cout << "INT_MIN - INT_MAX = " << tsub_ok(INT_MIN, INT_MAX) << endl; // 输出: 0（溢出）
    
    return 0;
}