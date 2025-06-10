#include <iostream>
#include <vector>
using namespace std;

// 将函数定义移到main()外部（全局作用域）
void printVector(const vector<vector<int>>& vec) {
    for (const auto& row : vec) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
}

int main() {
    // ====================== 1. 初始化二维vector ======================
    vector<vector<int>> matrix1(3, vector<int>(4, 0));
    cout << "matrix1[1][2] = " << matrix1[1][2] << endl;

    vector<vector<int>> matrix2;
    vector<int> row1 = {1, 2, 3};
    vector<int> row2 = {4, 5, 6, 7};
    matrix2.push_back(row1);
    matrix2.push_back(row2);
    cout << "matrix2行数: " << matrix2.size() << endl;
    cout << "第二行列数: " << matrix2[1].size() << endl;

    // ====================== 2. 元素操作 ======================
    matrix1[0][1] = 100;
    matrix2[1][3] = 99;
    matrix1.push_back({200, 300});
    matrix2[0].push_back(4);

    // ====================== 3. 遍历二维vector ======================
    cout << "\n=== 下标遍历 matrix1 ===" << endl;
    for (int i = 0; i < matrix1.size(); i++) {
        for (int j = 0; j < matrix1[i].size(); j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n=== 范围for遍历 matrix2 ===" << endl;
    for (const auto& row : matrix2) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }

    // ====================== 4. 二维vector常用函数 ======================
    int rows = matrix1.size();
    int cols = (rows > 0) ? matrix1[0].size() : 0;
    cout << "\nmatrix1行数: " << rows << ", 列数: " << cols << endl;

    matrix1.clear();
    cout << "matrix1清空后行数: " << matrix1.size() << endl;

    if (matrix1.empty()) {
        cout << "matrix1已为空" << endl;
    }

    // ====================== 5. 二维vector传参给函数 ======================
    cout << "\n=== 函数打印 matrix2 ===" << endl;
    printVector(matrix2);  // 正确调用外部定义的函数

    return 0;
}