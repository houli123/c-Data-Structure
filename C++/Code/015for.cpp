#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

int main() {
    auto x = 10;                // 初始化表达式是 `10`（int 类型），x 推导为 int
    auto it = begin("hello");   // 初始化表达式是 `begin("hello")`（函数调用表达式），it 推导为 const char*（因为 "hello" 是 const char[6]，begin 返回其首元素指针）
    auto vec = {1, 2, 3};       // 初始化表达式是初始化列表，vec 推导为 std::initializer_list<int>
    
    // 遍历字符串（每个字符）
    for (char ch : "hello") {  // 等价于 
        cout << ch;
    }
    cout << endl;

    string str = "jjbond";
    for (auto it = str.begin(); it != str.end(); ++it) {  // 使用迭代器遍历
        char ch = *it;  // 解引用迭代器获取当前字符
        cout << ch;
    }
    cout << endl;

    // 逆序遍历字符串字面量 "hello"
    for (auto it = rbegin("hello"); it != rend("hello"); ++it) {  // 反向迭代器 rbegin() 和 rend()，可以简洁地实现逆序遍历
        cout << *it;  // 直接输出，无需中间变量
    }
    cout << endl;

    // 遍历vector（每个元素），这里是值传递
    vector<int> vec = {1, 2, 3};
    for (int num : vec) {  // num是元素的副本（值传递）
        num = 0;  // 不会修改vec中的原始值
    }

    map<int, string> my_map{
        {1, "apple"},
        {2, "ggbond"}
    };
    for (const auto& [key, value] : my_map) {  // C++17结构化绑定，显式获取键值对
        cout << key << " " << value << endl;
    }

    return 0;
}