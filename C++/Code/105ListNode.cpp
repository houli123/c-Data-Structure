#include <iostream>
using namespace std;

// C++ 中的 struct 就是一种类，它与类唯一的区别就是它的成员和继承行为默认是 public 的，而一般类的默认成员是 private 的
struct ListNode {  // 如果是c语言，还需要用上typedef来定义结构体类型
    int val;
    ListNode *next;  // cpp特有的不需要像C语言一样使用struct关键字来声明结构体指针
    // c语言版本
    // struct ListNode *next;

    // ListNode(int x) : val(x), next(nullptr) {}  // 构造函数，初始化val和next
    // 构造函数是一个特殊的成员函数，名字与类名相同,创建类类型对象时由编译器自动调用，以保证每个数据成员都有 一个合适的初始值，并且在对象整个生命周期内只调用一次。可以理解为python中的__init__方法。默认构造函数只能有一个。
};


class MyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int val):val(val), next(nullptr) {};
    };
    ListNode *_dummyHead;
    int _size;

public:
    MyLinkedList() {
        _dummyHead = new ListNode(0);
        _size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= _size)
            return -1;
        ListNode *cur = _dummyHead->next;
        while (index-- > 0) {
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        ListNode *newNode = new ListNode(val);
        newNode->next = _dummyHead->next;
        _dummyHead->next = newNode;
        _size++;
    }
    
    void addAtTail(int val) {
        ListNode *newNode = new ListNode(val), *cur = _dummyHead;
        while (cur->next) {
            cur = cur->next;
        }
        cur->next = newNode;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > _size)
            return;
        if (index < 0)
            index = 0;
        
        ListNode *newNode = new ListNode(val);
        ListNode *cur = _dummyHead;
        while (index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= _size || _size == 0)
            return;
        ListNode *cur = _dummyHead;
        while (index--) {
            cur = cur->next;
        }
        ListNode *temp = cur->next;
        cur->next = cur->next->next;
        delete temp;
        temp = nullptr;
        _size--;
    }

    void printLinkedList() {
        ListNode *cur = _dummyHead->next;
        while (cur) {
            cout << cur->val << "->";
            cur = cur->next;
        }
        cout << "null" << endl;
    }
};

// 测试函数
void testMyLinkedList() {
    MyLinkedList* list = new MyLinkedList();
    
    cout << "=== 测试开始 ===" << endl;
    
    // 测试addAtHead
    list->addAtHead(1);
    cout << "在头部添加1: ";
    list->printLinkedList();  // 1->null
    
    // 测试addAtTail
    list->addAtTail(3);
    cout << "在尾部添加3: ";
    list->printLinkedList();  // 1->3->null
    
    // 测试addAtIndex
    list->addAtIndex(1, 2);
    cout << "在位置1添加2: ";
    list->printLinkedList();  // 1->2->3->null
    
    // 测试get
    cout << "获取位置1的值: " << list->get(1) << endl;  // 2
    
    // 测试deleteAtIndex
    list->deleteAtIndex(1);
    cout << "删除位置1后: ";
    list->printLinkedList();  // 1->3->null
    
    // 边界测试
    cout << "尝试获取越界位置: " << list->get(3) << endl;  // -1
    list->addAtIndex(5, 4);  // 不执行
    cout << "尝试在越界位置添加: ";
    list->printLinkedList();  // 1->3->null
    cout << "尝试在下标为负时添加: ";
    list->addAtIndex(-1, 4);
    list->printLinkedList();

    cout << "=== 测试结束 ===" << endl;

    delete list;
}


int main() {
    // 定义了构造函数时使用
    // ListNode *head = new ListNode(5);  

    // 没定义构造函数时使用
    //使用默认构造函数初始化节点：初始化时不能直接给变量赋值
    ListNode *head2 = new ListNode();
    head2->val = 10;



    testMyLinkedList();
    return 0;
}