#include <iostream>
using namespace std;

void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int Count1()//传值返回
{
    static int n =  0;
    n++;
    return n;
}
int& Count2()//传引用返回
{
    static int n = 0;
    n++;
    return n;
}

/*
引用和指针的区别
在语法概念上引用就是一个别名，没有独立空间，和其引用实体共用同一块空间。但其实在底层实现上实际是有空间的，因为引用是按照指针方式来实现的。

引用概念上定义一个变量的别名，指针存储一个变量地址。
引用在定义时必须初始化，指针没有要求
引用在初始化时引用一个实体后，就不能再引用其他实体，而指针可以在任何时候指向任何一个同类型实体
在sizeof中含义不同**：引用结果为引用类型的大小**，但指针始终是地址空间，所占字节个数为32/64个字节
引用自加即引用的实体增加1，指针自加即指针向后偏移一个类型的大小
有多级指针，但是没有多级引用
访问实体方式不同，指针需要显式解引用，引用编译器自己处理
*/
int main(){
    // references是指针的意思吧
    string food = "Pizza";
    string &meal = food;   //meal指向food地址，使用meal和food值相同，而&meal才是food的地址

    cout << meal << endl;
    cout << &food << endl;
    cout << &meal << endl;

    string *meal2 = &food;
    cout << meal2 << endl;
    cout << &food << endl;
    cout << *meal2;  //c语言解引用
    cout << endl;
    // --------------------------------------

    const int& r1 = Count1();//如果不加const就会编译不通过
    int& r2 = Count2();

    const int a  = 0;
    // 这个地方编译不通过，因为变量a是只读的，b的类型是int，也就是可读可写的，这里属于权限的放大。
    // int& b = a; //引用必须要进行初始化，不能单独定义
    const int& b = a; // 如果加上const就可以了，这里b是只读的，a也是只读的，所以权限没有放大。引用取别名时，变量取别名时，变量访问的权限可以缩小，不能放大
    cout << "b = " << b << endl; // 输出 Count1() 的返回值
    return 0;
}

// 在C++中，我们在表示空指针的时候要把C语言中惯用的NULL换成nullptr，因为NULL可能被定义为字面常量0，或者被定义为无类型指针(void*)的常量。