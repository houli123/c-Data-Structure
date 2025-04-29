#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            // 思路是先用二分查找找到符合条件的任意一个位置，之后前后找它的范围
            int n = nums.size();
            if (n == 0)
                return vector<int>{-1, -1};
            int start = -1, end = -1, left = 0, right = n - 1;
            while (left <= right) {
                int mid = (left + right) / 2;
                
                if (nums[mid] == target) {
                    start = mid;
                    break;
                } else if (nums[mid] < target) // 在右侧查找
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            
            // 接下来前后找到最大的数组开始范围
            for (int i = start; i < n; i++)
                if (i != -1 && nums[i] == target) // 符合条件的话保存下来，更新end值
                    end = i;
            for (int i = start - 1; i >= 0; i--)
                if (i != -1 && nums[i] == target) // 符合条件的话保存下来，更新end值
                    start = i;
            return vector<int>{start, end};
        }
    };

