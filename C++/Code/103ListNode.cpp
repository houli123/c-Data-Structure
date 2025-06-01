#include <iostream>
#include <vector>
using namespace std;

// C++ 中的 struct 就是一种类，它与类唯一的区别就是它的成员和继承行为默认是 public 的，而一般类的默认成员是 private 的
struct ListNode {  // 如果是c语言，还需要用上typedef来定义结构体类型
    int val;
    ListNode *next;  // cpp特有的不需要像C语言一样使用struct关键字来声明结构体指针
    // c语言版本
    // struct ListNode *next;

    
    // 构造函数是一个特殊的成员函数，名字与类名相同,创建类类型对象时由编译器自动调用，以保证每个数据成员都有 一个合适的初始值，并且在对象整个生命周期内只调用一次。可以理解为python中的__init__方法。默认构造函数只能有一个。
}

int main() {
    
    return 0;
}

