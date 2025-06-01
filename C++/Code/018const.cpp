#include <iostream>
#include <vector>

using namespace std;

struct ConstMember {
  int s = 0;

  void func() { std::cout << "General Function" << std::endl; }

  void constFunc1() const { std::cout << "Const Function 1" << std::endl; }

  void constFunc2(int ss) const {
    // func(); // const 成员函数不能调用非 const 成员函数
    constFunc1();

    // s = ss; // const 成员函数不能修改成员变量
  }
};

int main() {
    int* const p1 = nullptr;  // 指针常量，初始化后指向地址不可改，可更改指向的值
    const int* p2 = nullptr;  // 常量指针，解引用的值不可改，可指向其他 int 变量
    const int* const p3 = nullptr;  // 常量指针常量，值不可改，指向地址不可改

    // 使用别名能更好提高可读性
    using const_int = const int;
    using ptr_to_const_int = const_int*;
    using const_ptr_to_const_int = const ptr_to_const_int;

    int b = 1;
    ConstMember c{};
    const ConstMember d = c;
    // d.func(); // 常量不能调用非 const 成员函数
    d.constFunc2(b);
    return 0;
}