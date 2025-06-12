

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

1. [167. Two Sum II - Input Array Is Sorted](https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted/)

   滑动窗口：直接左右指针的方式，当和大于target时，让右指针左移，也就是和会减小；而当和小于target时，让左指针右移，这样和就会增大

2. [203. Remove Linked List Elements](https://leetcode.cn/problems/remove-linked-list-elements/)

   - 方法一：正常的前后指针解法

   - 方法二：设置一个虚拟头结点在进行移除节点操作

   - 方法三：通过递归的思路解决本题:

     基础情况：对于空链表，不需要移除元素。

     递归情况：首先检查头节点的值是否为 val，如果是则移除头节点，答案即为在头节点的后续节点上递归的结果；如果头节点的值不为 val，则答案为头节点与在头节点的后续节点上递归得到的新链表拼接的结果。

3. 无

4. [707. Design Linked List](https://leetcode.cn/problems/design-linked-list/)

   - 方法一：用虚拟节点（头指针）的方式来实现
   - 方法二：C语言实现双链表的版本

   [206. Reverse Linked List](https://leetcode.cn/problems/reverse-linked-list/)

   - 方法一：双指针的方式，通过以第一个节点为尾节点，最后一个节点为头结点的方式。
   - 方法二：递归解法，会有点难以理解
   - 方法三：使用虚拟头结点，通过头插法实现链表的反转

5. [92. Reverse Linked List II](https://leetcode.cn/problems/reverse-linked-list-ii/)

   - 方法一：将left的前一个元素作为虚拟头结点，只不过要保存left的节点，之后对区域内去逆序，最后将保存的left节点指向right后的节点即可
   - **方法二：完全抄的递归版本（有点挑战性，自己暂时想不出）**

6. 无

7. 无

8. 无

9. [25. Reverse Nodes in k-Group](https://leetcode.cn/problems/reverse-nodes-in-k-group/)

   - 方法一：借助gpt实现了头插法的版本
   - 方法二：自己尝试着用递归解出来了！
   - 方法三：递归和封装函数来解决此问题

   [141. Linked List Cycle](https://leetcode.cn/problems/linked-list-cycle/)

   - 方法一：快慢指针秒杀
   - 方法二：用哈希表来判断，如果哈希表中节点出现一次，则直接true。代价是会消耗额外的空间复杂度

10. [142. Linked List Cycle II](https://leetcode.cn/problems/linked-list-cycle-ii/)

    1. 方法一：参考了题解实现的双指针
    2. 方法二：简简单单哈希表

11. [160. Intersection of Two Linked Lists](https://leetcode.cn/problems/intersection-of-two-linked-lists/)

    1. 方法一：双层循环的方式
    2. 方法二：两个链表右端对齐的方式（参考了官解，但我已经理解了）
    3. 方法三：运用哈希表或者集合的方式，最坏的时间复杂度是O(n + m)

    [19. Remove Nth Node From End of List](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/)

    1. 方法一：最简单的方法，两次循环
    2. 方法二：利用 vector 来存储节点的方式，可以只遍历一次链表就完成
    3. 方法三：用vector来模拟栈的使用
    4. 方法四：双指针解决（最推荐的）

    [83. Remove Duplicates from Sorted List](https://leetcode.cn/problems/remove-duplicates-from-sorted-list/)

    1. 简简单单的双指针

12. [21. Merge Two Sorted Lists](https://leetcode.cn/problems/merge-two-sorted-lists/)

    1. 方法一：直接遍历完两次链表
    2. 方法二：递归。可以发现问题是根据传递进来的两个链表，合并成一个新的链表，那么我就可以使这个问题规模缩小，然后不断地重复执行，这样由小到大，最后出来的就是我想要的。就是速度和消耗比较差了

    **-x == ~(x - 1)**

13. 1





















