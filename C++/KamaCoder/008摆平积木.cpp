#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, h, s, move;
    while (cin >> n) {
        if (!n)
            break;
        s = 0;
        move = 0;
        vector<int> nums(n);  // 如果这里指定了个数，那么就会初始化n个0的数据，之后再push_back只会在这些0后面继续加，如果一定要指定个数，那么在下面循环里面的输入就要用 begin + i 的方式了
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            s += nums[i];
        }
        h = s / n;  // 求出将要变成的相同高度 h
        // cout << s << "\n\n" << h << e
        // 两次循环，时间复杂度是O（n + n）
        for (int i = 0; i < n; i++) {
            move += nums[i] > h ? nums[i] - h : h - nums[i];
        }
        cout << move / 2 << "\n\n";
    }
    return 0;
}