#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {  // getline这个可以读取有空格的字符，cin不行
        int s = 0;
        for (char i: str) {
            int y = i - '0';  // 这样就能够将字符的单个数字转成整形数字
            // cout << y << endl;
            if (y % 2 == 0)
                s +=y;
        }
        cout << s << "\n\n";
    }
    return 0;
}