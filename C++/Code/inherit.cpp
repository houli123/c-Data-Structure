#include <iostream>
using namespace std;

class Base {
    public:
        int a;
        void print() {
            cout << "Base class" << endl;
        };
};

//继承Base
class Derived : public Base {
    public:
        int b;  //子类独有的成员
        void print() {  //重写父类的print函数
            cout << "Derived class" << endl;
        };
};

//同时继承多个类
class Derived2 : public Base, public Derived {
    public:
        int c;  //子类独有的成员
        void print() {  //重写父类的print函数
            cout << "Derived2 class" << endl;
        };
};

int main(){

    Base b;  //父类对象
    Derived d;  //子类对象
    Derived2 d2;  //子类对象
    b.a = 1;  //父类对象可以访问父类的成员
    d.a = 2;  //子类对象可以访问父类的成员
    d.b = 3;  //子类对象可以访问子类的成员
    b.print();  //调用父类的print函数
    d.print();  //调用子类的print函数
    d2.print();  //调用子类的print函数

    //
    d2.Base::a = 4;  //使用作用域解析运算符指定要访问的是Base类的a
    return 0;
}