#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, a, b;
    unordered_map<int, int> hashmap{};  // 类似与python中的字典
    unordered_map<int, string> hashmap2{{1, "apple"}, {2, "ggbond"}}; 

    

    cout << hashmap.empty() << endl;  // 判断hashmap是否为空，返回true或false
    hashmap[1] = 2;  // 初始化一个元素
    cout << hashmap.empty() << endl;  

    if (hashmap.contains(1)) {  // 判断hashmap中是否存在key为1的元素，C++20新特性
        cout << "hashmap[1] = " << hashmap[1] << endl;
    } else {
        cout << "hashmap[1] not found" << endl;
    }
    // 也可以使用find()方法来判断元素是否存在
    auto it = hashmap.find(1);
    if (it != hashmap.end()) {
        cout << "hashmap[1] = " << it->second << endl; // 使用find查找哈希表后访问使用“->”的方式
    } else {
        cout << "hashmap[1] not found" << endl;
    }

    // 获取指定键对应的值，若不存在会返回默认构造的值（int类型为0，string类型为空字符串）
    cout << hashmap[2] << endl;  // 输出0
    // 输出空字符串
    cout << hashmap2[4] << endl;

    hashmap.erase(1);  // 删除key为1的元素

    cout << hashmap.size() << endl;  
    // 遍历hashmap  
    for (auto &p: hashmap) {
        cout << p.first << ':' << p.second << endl;
    }

    return 0;
}