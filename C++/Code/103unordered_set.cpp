#include <iostream>
#include <climits>
#include <unordered_set>

using namespace std;

int main() {
    // unordered_set 是 C++ 标准库中的一种哈希集合实现，用于存储不重复的元素，常见使用场景是对元素进行去重。
    unordered_set<int> mySet{1, 2, 4, 5};

    cout << mySet.empty() << endl; 

    cout << mySet.size() << endl;

    // 查找元素是否存在的三种方法
    if (mySet.find(3) != mySet.end()) {
        cout << "Found 3 in the set." << endl;
    } 
    else if (!mySet.contains(3)){
        cout << "3 not found in the set." << endl;
    }
    else if (mySet.count(3) > 0) {
        cout << "Found 3 in the set." << endl;
    } else {
        cout << "3 not found in the set." << endl;
    }

    // 插入元素的几种方法
    mySet.insert(3); 
    // 以下两种方法都是后插入的元素在前，也就是头插法
    mySet.emplace(6); // emplace 直接构造元素
    mySet.insert({7, 8}); // 插入多个元素
    
    // 遍历集合
    for (const auto& element: mySet) {
        cout << element << " ";
    }
    cout << endl;

    mySet.erase(3);
     if (mySet.count(3) > 0) {
        cout << "Found 3 in the set." << endl;
    } else {
        cout << "3 not found in the set." << endl;
    }

    mySet.clear();
    cout << mySet.empty() << endl;

    return 0;
}