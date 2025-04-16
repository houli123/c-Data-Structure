#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>


class MyClass {
    int b;  //默认private
    public:
        int a;  //public
        MyClass(int x, int y) {  //构造函数
            a = x;
            b = y;
        };
        void print() {
            cout << "a: " << a << ", b: " << b << endl;  //访问私有成员（只能在类内访问）
        };
        //成员函数可以访问私有成员
        int getB() {
            return b;
        };
    private:
        int c;  //private
        void setC(int x) {
            c = x;
        };

    protected:  //子类可以访问成员变量但不能访问成员函数，外部无法访问
        int d;  //protected
        void setD(int x) {
            d = x;
        };
        int getD() {
            return d;
        };
};

//子类继承父类调用protected成员函数
class Derived : public MyClass {
    public:
        Derived(int x, int y) : MyClass(x, y) {  //构造函数
            setD(x+y);  //可以访问protected成员函数
        };
        void print() {
            cout << "d: " << getD() << endl;  //可以访问protected成员函数，但是不能访问protected成员函数
        };
};

int main(){
    MyClass obj(1, 2);  //创建对象
    obj.print();  //调用成员函数
    cout << "b: " << obj.getB() << endl;  //通过公有函数访问私有成员
    //obj.setC(3);  //错误，无法访问私有成员函数

    //obj.setD(4);  //错误，无法访问protected成员函数
    //cout << "d: " << obj.getD() << endl;  //错误，无法访问protected成员函数


    Derived obj2(3, 4);  //创建子类对象
    obj2.print();  //调用子类成员函数
    // obj2.setD(5);  //错误，无法从外部访问protected成员函数
    // cout << "d: " << obj2.getD() << endl;  //错误，无法从外部访问protected成员函数
    return 0;
}