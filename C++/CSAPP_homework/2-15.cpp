#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout << !(x ^ y);
    return 0;
}