#include <iostream>
#include <cstdio>

using namespace std;

// 命名空间的目的是对标识符的名称进行本地化，以避免命名冲突或名字污染
namespace MyNamespace { 
    int _st = 10;
    void Swap(int& a, int& b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
}

using MyNamespace::_st;
using namespace MyNamespace; // 使用 MyNamespace 命名空间


int main()
{
    cout << MyNamespace::_st << endl; // 输出 MyNamespace 中的 _st 变量
    cout << _st << endl;
    return 0;
}
