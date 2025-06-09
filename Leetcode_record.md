

# 洛谷说明

各个评测状态

**AC**：Accept，程序通过。

**WA**：Wrong Answer，答案错误。

**CE**：Compile Error，**编译错误。**

**PC**：Partially Correct，部分正确。

**RE**：Runtime Error，运行时错误。

**TLE**：Time Limit Exceeded，超出时间限制。

**MLE**：Memory Limit Exceeded，超出内存限制。

**OLE**：Output Limit Exceeded，输出超过限制。

**UKE**：Unknown Error，出现未知错误。

# 2025

## 5月

### [76\. 最小覆盖子串](https://leetcode.cn/problems/minimum-window-substring/)

```cpp
// 滑动窗口算法伪码框架
void slidingWindow(string s) {
    // 用合适的数据结构记录窗口中的数据，根据具体场景变通
    // 比如说，我想记录窗口中元素出现的次数，就用 map
    // 如果我想记录窗口中的元素和，就可以只用一个 int
    auto window = ...

    int left = 0, right = 0;
    while (right < s.size()) {
        // c 是将移入窗口的字符
        char c = s[right];
        window.add(c);
        // 增大窗口
        right++;

        // 进行窗口内数据的一系列更新
        ...

        // *** debug 输出的位置 ***
        printf("window: [%d, %d)\n", left, right);
        // 注意在最终的解法代码中不要 print
        // 因为 IO 操作很耗时，可能导致超时

        // 判断左侧窗口是否要收缩
        while (window needs shrink) {
            // d 是将移出窗口的字符
            char d = s[left];
            window.remove(d);
            // 缩小窗口
            left++;

            // 进行窗口内数据的一系列更新
            ...
        }
    }
}
```

### [567. 字符串的排列](https://leetcode.cn/problems/permutation-in-string/)

滑动窗口还可以固定大小的方式，就适用于这种子串、子排列相同长度的情况下

### [46. Permutations](https://leetcode.cn/problems/permutations/)

基本抄了官方的解了，第一次做仅能想到每一次要不断通过递归，确定一个元素，才能实现所有的情况可能，但是没想出具体如何实现递归，直接看了题解了

回溯算法的框架：

```
result = []
def backtrack(路径, 选择列表):
    if 满足结束条件:
        result.add(路径)
        return
    
    for 选择 in 选择列表:
        做选择
        backtrack(路径, 选择列表)
        撤销选择
```



## 6月

### [25. Reverse Nodes in k-Group](https://leetcode.cn/problems/reverse-nodes-in-k-group/)

尝试着自己用递归解答了链表逆序问题

```cpp
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // 尝试用递归思考去解决：本任务是要以按照k个节点为一组来为每一组进行逆序，而对于达不到k个元素的就不需要逆序，那么算法可以优化成：先对一组去逆序，接着在对后续的元素按照k个节点为一组的方式去调用递归。我觉得难点在于递归前后传递这些，以及应该从哪里开始之类的
        // 先判断边界情况
        if (!head || k == 1)    return head;
        
        ListNode *dummyHead = new ListNode(0, head);
        for (int i = 0; i < k && dummyHead; i++) dummyHead = dummyHead->next;
        if (!dummyHead) return head;  // 如果达不到k个，则原顺序返回

        ListNode *cur, *pre, *start, *t;
        pre = nullptr;
        start = head;
        cur = start;

        for (int i = 0; i < k && cur; i++) {
            t = cur->next;
            cur->next = pre;
            pre = cur;
            cur = t;
        }

        // pre = start;
        start->next = reverseKGroup(cur, k);

        return pre;
    }
};
```





















