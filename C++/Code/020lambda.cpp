#include <iostream>
#include <vector>
#include <algorithm>  // for_each, sort
#include <functional> // function
using namespace std;

int main() {
    // [capture](parameters) -> return_type { body }
    // 捕获列表 [capture]：指定如何捕获外部变量
    // 参数列表 (parameters)：类似于函数的参数列表
    // 返回类型 -> return_type：可选，可自动推导
    // 函数体 { body }：执行的代码

    // 1. 简单的 lambda 函数，无参数，无捕获
    auto greet = []() { cout << "Hello, Lambda!" << endl; };
    greet(); // 输出: Hello, Lambda!
    
    // 2. 带参数的 lambda 函数
    auto add = [](int a, int b) { return a + b; };
    cout << "2 + 3 = " << add(2, 3) << endl; // 输出: 2 + 3 = 5
    
    // 3. 带返回类型的 lambda 函数
    auto divide = [](double a, double b) -> double {  // 很像python3中的函数定义
        if (b == 0) return 0;
        return a / b;
    };
    cout << "5.0 / 2.0 = " << divide(5.0, 2.0) << endl; // 输出: 5.0 / 2.0 = 2.5
    
    // 4. 使用 lambda 进行值捕获
    int x = 10;
    auto printX = [x]() { cout << "x = " << x << endl; };
    printX(); // 输出: x = 10
    
    // 5. 使用 lambda 进行引用捕获
    int y = 20;
    auto incrementY = [&y]() { y++; };
    incrementY();
    cout << "y = " << y << endl; // 输出: y = 21
    
    // 6. 在 STL 算法中使用 lambda
    vector<int> numbers = {1, 2, 3, 4, 5};
    for_each(numbers.begin(), numbers.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl; // 输出: 1 2 3 4 5
    
    // 7. 在排序中使用 lambda
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b; // 降序排序
    });
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl; // 输出: 5 4 3 2 1
    

    
    // 1. 存储 lambda 到 function
    function<int(int, int)> multiply = [](int a, int b) { return a * b; };
    cout << "3 * 4 = " << multiply(3, 4) << endl; // 输出: 3 * 4 = 12
    
    // 2. 在 lambda 中修改按值捕获的变量（使用 mutable）
    int count = 0;
    auto increment = [count]() mutable { count++; cout << "Count: " << count << endl; };
    increment(); // 输出: Count: 1
    increment(); // 输出: Count: 2
    cout << "Original count: " << count << endl; // 输出: Original count: 0
    
    // 3. 递归 lambda（需要 function）
    function<int(int)> factorial = [&factorial](int n) {
        return n <= 1 ? 1 : n * factorial(n - 1);
    };
    cout << "5! = " << factorial(5) << endl; // 输出: 5! = 120
    
    // 4. 使用 lambda 作为回调
    auto processNumbers = [](const vector<int>& nums, function<void(int)> callback) {
        for (int num : nums) {
            callback(num);
        }
    };
    
    processNumbers({1, 2, 3, 4, 5}, [](int num) {
        cout << num * 2 << " ";
    });
    cout << endl; // 输出: 2 4 6 8 10
    
    return 0;
}