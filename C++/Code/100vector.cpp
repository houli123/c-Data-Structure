#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums(3);  // 数组中默认值是0
    cout << nums[2] << endl;

    // vector的n种插入方式
    nums.push_back(20);
    cout << nums[3] << endl;
    // 在尾部直接构造一个元素
    nums.emplace_back(30);  // 直接构造元素，无需临时对象
    cout << "emplace_back后的最后一个元素: " << nums.back() << endl;
    // 在指定索引位置处插入一个元素（使用insert，此方法会移动后面的元素，效率较低）
    nums.insert(nums.begin() + 0, 99);  // nums.begin() 返回的是一个迭代器
    // emplace同样可以实现insert的功能
    nums.emplace(nums.begin() + 2, 199);  
    // 修改第2个元素为30，会检查越界，越界会抛出异常
    nums.at(1) = 30;  

    // 获得最后一个元素
    cout << nums.back() << endl;

    // 删除最后一个元素
    nums.pop_back();

    // 删除索引处的元素
    nums.erase(nums.begin() + 1);

    // 查看数组大小
    cout << "当前数组大小: " << nums.size() << endl;

    // 交换数组元素
    swap(nums[0], nums[1]);

    // 遍历数组
    cout << "最终数组元素: ";
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << ' ';
    cout << endl;

    // 重新分配5个元素，所有元素初始化为100
    nums.assign(5, 100);  
    cout << "assign后的数组元素: ";
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << ' ';
    cout << endl;

    return 0;
}