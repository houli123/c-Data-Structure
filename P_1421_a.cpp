#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int pen = ((a << 10) + (b * 102)) / 1946;
    cout << pen;
    return 0;
}