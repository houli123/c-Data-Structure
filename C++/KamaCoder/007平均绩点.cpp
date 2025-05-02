#include <iostream>
#include <string>
using namespace std;

int calc(char c) {
    switch (c) {
        case 'A': {       // 如果需要在 switch 语句中定义变量，花括号是必须要加的
            return 4;
            break;
        }
        case 'B':
            return 3;
            break;
        case 'C':
            return 2;
            break;
        case 'D':
            return 1;
            break;
        case 'F':
            return 0;
            break;
        case ' ':
            return 0;
            break;
        default:
            return -1;
    }
}

int main() {
    string str;
    while (getline(cin, str)) {  // 接受一整行字符串
        float s = 0;
        bool flag = 1;  // 用来标记时候有不符合的    
        int count = 0;
        for (int i = 0; i < str.size(); i++) {
            if (calc(str[i]) == -1) {
                flag = 0;
                cout << "Unknown" << endl;
                break;
            }
            s += calc(str[i]);
            if (str[i] != ' ')
                count += 1;
        }
        if (flag)
            printf("%.2f\n", s / count);
    }
    return 0;
}