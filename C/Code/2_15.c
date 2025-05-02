#include <stdio.h>

int main() {
    // 只使用位级和逻辑运算，编写一个 C 表达式，它等价千 x==y。换句话说，当 x 和 y 相等时它将返回 1, 否则就返回 0 。
    int x = 0x66, y = 0x39;
    if ((x & y) == x)
        printf("1");
    else
        printf("0");
    return 0;
}