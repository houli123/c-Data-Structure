// 动态数组vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums(3);  // 数组中默认值是0
    cout << nums[2] << endl;

    // 尾部插入一个元素
    nums.push_back(20);
    cout << nums[3] << endl;

    // 获得最后一个元素
    cout << nums.back() << endl;

    //删除最后一个元素
    nums.pop_back();

    // 在指定 索引 位置处插入一个元素99
    nums.insert(nums.begin() + 0, 99);  // nums.begin() 返回的是一个迭代器，而迭代器本质上是一个类似于指针的对象，用于访问容器中的元素
    nums.insert(nums.begin() + 2, 199);

    // 删除 索引 处的元素
    nums.erase(nums.begin() + 1);

    // 交换数组元素
    swap(nums[0], nums[1]);

    // 遍历数组
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << ' ';
    return 0;
}