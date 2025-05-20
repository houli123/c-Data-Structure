#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums(3);  // 数组中默认值是0
    cout << nums[2] << endl;

    // 尾部插入一个元素（使用push_back）
    nums.push_back(20);
    cout << nums[3] << endl;

    // 获得最后一个元素
    cout << nums.back() << endl;

    // 删除最后一个元素
    nums.pop_back();

    // 在尾部直接构造一个元素（使用emplace_back）
    nums.emplace_back(30);  // 直接构造元素，无需临时对象
    cout << "emplace_back后的最后一个元素: " << nums.back() << endl;

    // 在指定索引位置处插入一个元素（使用insert）
    nums.insert(nums.begin() + 0, 99);  // nums.begin() 返回的是一个迭代器

    // 在指定索引位置处直接构造一个元素（使用emplace）
    nums.emplace(nums.begin() + 2, 199);  // 在索引2处直接构造元素199

    // 删除索引处的元素
    nums.erase(nums.begin() + 1);

    // 交换数组元素
    swap(nums[0], nums[1]);

    // 遍历数组
    cout << "最终数组元素: ";
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << ' ';
    cout << endl;

    return 0;
}