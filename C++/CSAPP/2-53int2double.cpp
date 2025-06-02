#include <stdio.h>
#include <limits.h>


// 生成特殊浮点值的宏定义
#define POS_INFINITY (1.0e308 * 1.0e308)  // 正无穷
#define NEG_INFINITY (-1.0e308 * 1.0e308) // 负无穷
#define NEG_ZERO (-1.0 / POS_INFINITY)    // 负零

int main() {
    double pos_inf = POS_INFINITY;
    double neg_inf = NEG_INFINITY;
    double neg_zero = NEG_ZERO;
    
    printf("正无穷: %f\n", pos_inf);       // 输出: inf
    printf("负无穷: %f\n", neg_inf);       // 输出: -inf
    printf("负零: %f\n", neg_zero);        // 输出: -0.000000
    printf("1/负零: %f\n", 1.0/neg_zero); // 输出: -inf
    
    // ------- 浮点数转换和舍入 -------
    // 1.int -> float 舍入
    int big_int = 16777217; // 2^24 + 1
    float f = (float)big_int;
    printf("int(%d) -> float: %.1f (舍入损失)\n", big_int, f);
    // 输出: 16777216.0 (丢失精度)

    // 2.int/float -> double 保留精确值 
    double d1 = big_int;
    double d2 = f;
    printf("int(%d) -> double: %.1f\n", big_int, d1);
    printf("float(%.1f) -> double: %.1f\n", f, d2);
    // 输出精确值

    // 3.double -> float 溢出和舍入
    double huge = 1.0e308;
    float f_huge = (float)huge;
    printf("double(%.1e) -> float: %f (溢出为inf)\n", huge, f_huge);
    // 输出: inf

    // 4.float/double -> int 向零舍入
    double d3 = 1.999;
    double d4 = -1.999;
    int i1 = (int)d3;
    int i2 = (int)d4;
    printf("double(%.3f) -> int: %d\n", d3, i1); // 输出: 1
    printf("double(%.3f) -> int: %d\n", d4, i2); // 输出: -1

    // 5.浮点到整数的溢出 (Intel示例)
    double overflow = 1e10;
    int overflow_int = (int)overflow;
    printf("double(%.0f) -> int: %d (溢出为负值)\n", overflow, overflow_int);
    // 输出: -2147483648 (TMin)
    
    // 5的更多例子
    d3 = INT_MAX + 1.0; // 2,147,483,648
    printf("(int)%.0f = %d (溢出)\n", d3, (int)d3); // -2147483648
    // 负数溢出
    double d5 = INT_MIN - 1.0; // -2,147,483,649
    printf("(int)%.0f = %d (负溢出)\n", d5, (int)d5); // -2147483648

    return 0;
}