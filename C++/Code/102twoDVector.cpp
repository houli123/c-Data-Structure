#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ====================== 1. 初始化二维vector ======================
    // 方式1：指定行数和列数，所有元素初始化为0
    vector<vector<int>> matrix1(3, vector<int>(4, 0));  // 3行4列，初始值0
    cout << "matrix1[1][2] = " << matrix1[1][2] << endl;  // 输出：0

    // 方式2：动态添加行和列（逐行构建）
    vector<vector<int>> matrix2;
    vector<int> row1 = {1, 2, 3};       // 第一行
    vector<int> row2 = {4, 5, 6, 7};    // 第二行（列数可不同）
    matrix2.push_back(row1);            // 添加第一行
    matrix2.push_back(row2);            // 添加第二行
    cout << "matrix2行数: " << matrix2.size() << endl;   // 输出：2
    cout << "第二行列数: " << matrix2[1].size() << endl; // 输出：4

    // ====================== 2. 元素操作 ======================
    // 修改元素值
    matrix1[0][1] = 100;                // 修改第一行第二列元素
    matrix2[1][3] = 99;                 // 修改第二行第四列元素

    // 动态添加行
    matrix1.push_back({200, 300});       // 添加第三行（列数可与其他行不同）
    cout << "matrix1新增行最后一列: " << matrix1[3][1] << endl;  // 输出：300

    // 动态添加列（对某一行操作）
    matrix2[0].push_back(4);             // 为第一行添加一列（原值{1,2,3} → {1,2,3,4}）
    cout << "matrix2第一行新列值: " << matrix2[0][3] << endl; // 输出：4

    // ====================== 3. 遍历二维vector ======================
    // 方式1：传统下标遍历
    cout << "\n=== 下标遍历 matrix1 ===" << endl;
    for (int i = 0; i < matrix1.size(); i++) {          // 遍历行
        for (int j = 0; j < matrix1[i].size(); j++) {   // 遍历列
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }

    // 方式2：范围for循环（推荐，更简洁）
    cout << "\n=== 范围for遍历 matrix2 ===" << endl;
    for (const auto& row : matrix2) {   // 遍历每一行（auto& 避免拷贝，const 避免修改）
        for (int val : row) {           // 遍历该行元素（val 是值拷贝，如需修改用 int& val）
            cout << val << "\t";
        }
        cout << endl;
    }

    // ====================== 4. 二维vector常用函数 ======================
    // 获取行数和列数
    int rows = matrix1.size();                  // 行数
    int cols = (rows > 0) ? matrix1[0].size() : 0; // 列数（需判断空数组）
    cout << "\nmatrix1行数: " << rows << ", 列数: " << cols << endl;

    // 清空二维vector
    matrix1.clear();
    cout << "matrix1清空后行数: " << matrix1.size() << endl; // 输出：0

    // 判断是否为空
    if (matrix1.empty()) {
        cout << "matrix1已为空" << endl;
    }

    // ====================== 5. 二维vector传参给函数 ======================
    // 定义函数：打印二维vector（使用引用避免拷贝，const 防止修改）
    void printVector(const vector<vector<int>>& vec) {
        for (const auto& row : vec) {
            for (int val : row) {
                cout << val << "\t";
            }
            cout << endl;
        }
    }

    // 调用函数打印matrix2
    cout << "\n=== 函数打印 matrix2 ===" << endl;
    printVector(matrix2);

    return 0;
}