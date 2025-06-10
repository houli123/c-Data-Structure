#include <iostream>
#include <cmath>
using namespace std;

int main() {
        float f = INFINITY;
        cout << 1.0 / -0.0 << endl;
        cout << nan << endl;
        cout << f << endl;
        nullptr_t p = nullptr;  // C++11引入的nullptr
        cout << p << endl;  // 输出nullptr的地址，通常为0
}