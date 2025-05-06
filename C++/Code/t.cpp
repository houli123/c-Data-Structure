#include <iostream>
#include <vector>
using namespace std;

int binaryLeft(vector<int>&nums, int low, int high, int target) {
    int h = high;
    while (low <= high) {
        int mid = (low + high) >> 1;  // 相当于除以2
        if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low > h ? -1 : low;
}
int main() {
    vector<int> a{1,2,3};
    cout << binaryLeft(a, 0, a.size() - 1, 0) << endl;
    cout << binaryLeft(a, 0, a.size() - 1, 1) << endl;
    cout << binaryLeft(a, 0, a.size() - 1, 2) << endl;
    cout << binaryLeft(a, 0, a.size() - 1, 3) << endl;
    cout << binaryLeft(a, 0, a.size() - 1, 4) << endl;
}