

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

13. 复习递归解法：[92. Reverse Linked List II](https://leetcode.cn/problems/reverse-linked-list-ii/)

    [23. Merge k Sorted Lists](https://leetcode.cn/problems/merge-k-sorted-lists/)

    1. 方法一，将全部元素加入到一个数组中，后对数组排序，再遍历数组，生成一个链表的方式，最容易想到的做法
    2. 方法二：定义一个函数，该函数的功能是对两个链表进行合并并以小到大排序，首先需要计算共有多少个链表，则需要调用该函数 n - 1 次，即可完成全部链表的合并和排序的功能
    3. 方法三：分治法解决，将一个大问题分解为很多个小问题。例如本体要按顺序合并k个链表，那么我只需要先合并好左边的链表和右边的链表，再用一次合并两个链表即可实现；而左右两边链表合并的过程和这一个大问题是一样的

14. [24. Swap Nodes in Pairs](https://leetcode.cn/problems/swap-nodes-in-pairs/)

    1. 方法一：简单的双指针的方式（迭代或者叫模拟）

    2. 方法二：这题一看就可以用递归解，比如将交换链表中的每两个元素变为只交换一个，但是交换完之后，将pre指针指向调用递归后的结果

15. 无

16. 常见的三种哈希结构

    当我们想使用哈希法来解决问题的时候，我们一般会选择如下三种数据结构。

    - 数组
    - set （集合）
    - map(映射)

    在C++中，set 和 map 分别提供以下三种数据结构，其底层实现以及优劣如下表所示：

    | 集合               | 底层实现 | 是否有序 | 数值是否可以重复 | 能否更改数值 | 查询效率 | 增删效率 |
    | ------------------ | -------- | -------- | ---------------- | ------------ | -------- | -------- |
    | std::set           | 红黑树   | 有序     | **否**           | 否           | O(log n) | O(log n) |
    | std::multiset      | 红黑树   | 有序     | **是**           | 否           | O(logn)  | O(logn)  |
    | std::unordered_set | 哈希表   | **无序** | **否**           | 否           | **O(1)** | **O(1)** |

    std::**unordered_set底层实现为哈希表**，std::**set 和std::multiset 的底层实现是红黑树**，红黑树是一种平衡二叉搜索树，所以key值是有序的，但key不可以修改，改动key值会导致整棵树的错乱，所以**只能删除和增加**。

    | 映射               | 底层实现 | 是否有序    | 数值是否可以重复 | 能否更改数值 | 查询效率 | 增删效率 |
    | ------------------ | -------- | ----------- | ---------------- | ------------ | -------- | -------- |
    | std::map           | 红黑树   | key有序     | key**不可重复**  | key不可修改  | O(logn)  | O(logn)  |
    | std::multimap      | 红黑树   | key有序     | key**可重复**    | key不可修改  | O(log n) | O(log n) |
    | std::unordered_map | 哈希表   | key**无序** | key不可重复      | key不可修改  | **O(1)** | **O(1)** |

    std::unordered_map 底层实现为哈希表，std::map 和std::multimap 的底层实现是红黑树。同理，std::map 和std::multimap 的key也是有序的（这个问题也经常作为面试题，考察对语言容器底层的理解）。

    当我们要使用集合来解决哈希问题的时候，优先使用unordered_set，因为它的查询和增删效率是最优的，**如果需要集合是有序的，那么就用set，如果要求不仅有序还要有重复数据的话，那么就用multiset。**

    [242. Valid Anagram](https://leetcode.cn/problems/valid-anagram/)

    1. 方法一：最简单的就是用两个哈希表的方式
    2. 方法二，排序后看想不想同
    3. 方法三：用数组的方式，但不适用于unicode编码的字符

    [349. Intersection of Two Arrays](https://leetcode.cn/problems/intersection-of-two-arrays/)

    1. 方法一：直接哈希数组搞定
    2. 方法二：用数组的方式（只能适用于题目给了你数组范围的条件下）

    直接使用set 不仅占用空间比数组大，而且速度要比数组慢，set把数值映射到key上都要做hash计算的。

    不要小瞧 这个耗时，在数据量大的情况，差距是很明显的

    [202. Happy Number](https://leetcode.cn/problems/happy-number/)

    1. 方法一：用自定义的死循环界限，但面试肯定不适合
    2. **方法二：快慢指针其实是判断有无环的标准操作**
    3. **方法三：哈希集合的方式来判断是否有重复的元素**

17. [1. Two Sum](https://leetcode.cn/problems/two-sum/)

    1. 方法一：最笨的三重循环方式
    2. 方法二：用分治法来解决，题目是求四个数组和为0，那我直接先求好两组两个数组的和，再将这两组（排列）组合起来
    3. **方法三：方法二的优化版本，减少了遍历次数**

    [454. 4Sum II](https://leetcode.cn/problems/4sum-ii/)

    1. 方法一：最笨的三重循环方式
    2. 方法二：用分治法来解决，题目是求四个数组和为0，那我直接先求好两组两个数组的和，再将这两组（排列）组合起来
    3. 方法三：方法二的优化版本，减少了遍历次数

18. [383. Ransom Note](https://leetcode.cn/problems/ransom-note/)

    1. 方法一：直接magazine存到哈希表里，再用ransomNote去-1
    2. 方法二：用数组形式的哈希表，会更加的快

    **[15. 3Sum](https://leetcode.cn/problems/3sum/)**

    1. 方法一：双层循环，确认两个数这样可以唯一确认第三个数。但是我自己写的超时了，借助到gpt才能通过

19. 无

20. 无

21. 无

22. 方法二：自己想的双指针办法，先对整个数组进行排序，然后双指针一个从前一个从后出发，这样得到的是两数之和，将该和与另一数相加就是结果了。自己写的版本超时了，gpt帮我优化好了，性能不如方法一

    方法二改进版：从前往后去固定一个数，接着在这个数的后面定义高低指针，去不断寻找符合条件的情况

23. \54. 替换数字（第八期模拟笔试）

    1. 方法一：用辅助空间的方式
    2. 方法二：不使用辅助空间的方法

    [541. Reverse String II](https://leetcode.cn/problems/reverse-string-ii/)

    1. 一层循环搞定

    [151. Reverse Words in a String](https://leetcode.cn/problems/reverse-words-in-a-string/)

    1. 方法一：使用辅助空间的方式，从后往前遍历
    2. 方法二：不使用辅助空间的方式来实现：将整个字符串逆序，这样单词位置逆序就实现了，再对每个单词实现逆序，这样就是最终结果了

24. 1

25. 1

26. 1

27. 

    

















