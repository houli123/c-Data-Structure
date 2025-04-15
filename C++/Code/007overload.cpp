#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
    return x + y;
}

//c++支持函数重载，函数名相同，参数不同
// 这里的参数不同是指参数类型不同，或者参数个数不同
//如果参数类型不完全相同，则可能报错
double plusFunc(double x, double y) {
    return x - y;
}

int main() {
    int myNum1 = plusFunc(8, 5);
    //传递不同类型的参数，调用不同的函数
    double myNum2 = plusFunc(4.3, 6.26);
    
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    
    return 0;
}