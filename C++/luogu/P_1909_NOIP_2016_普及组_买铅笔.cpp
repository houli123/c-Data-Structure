#include <iostream>
#include <climits>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, minPrice = 0, t, num, price;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> num >> price;
        t = ceil(n / float(num)) * price;
        if (i == 0 || t < minPrice) {
            minPrice = t;
        }
    }
    cout << minPrice << endl;
    return 0;
}