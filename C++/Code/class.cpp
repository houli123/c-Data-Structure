#include <iostream>
using namespace std;

class Car {
public:
	string brand;
	string model;
	int year;
};

class Car2 {
    public:
        string brand;
        string model;
        int year;
        
        // 构造函数（指构造一个类的实体时，自动执行的函数，相当于python的__init__），和类名相同
        Car2(string b, string m, int y) {  //和类名相同就相当于函数传参
            brand = b;
            model = m;
            year = y;
        }
        
        // Default constructor
        Car2() {   //默认值
            brand = "Unknown";
            model = "Unknown";
            year = 0;
        }

        int speed(int maxSpeed);  //类里声明函数，类外定义函数

        void printf(){
            cout << brand << " " << model << " " << year << "\n";
        }
};

//类外定义函数
// 这里的函数定义和类里声明的函数名要一致，参数也要一致
int Car2::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
// Create an object of Car
Car carobj1;
carobj1.brand = "BMW";
carobj1.model = "X5";
carobj1.year = 1999;

// Create another object of Car
Car carobj2;
carobj2.brand = "Ford";
carobj2.model = "Mustang";
carobj2.year = 1969;

// Print attribute values
cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year << "\n";
cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year <<"\n";

// Create an object of Car2 using the constructor with parameters
Car2 carobj3("BMW", "X5", 1999);  //和类名相同就相当于函数传参
// Create an object of Car2 using the default constructor
Car2 carobj4;
// Print attribute values
cout << carobj3.brand << " " << carobj3.model << " " << carobj3.year << "\n";
cout << carobj4.brand << " " << carobj4.model << " " << carobj4.year << "\n";

cout << carobj3.speed(200) << "\n"; //调用成员函数
carobj3.printf(); //调用成员函数
}