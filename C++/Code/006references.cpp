#include <iostream>
using namespace std;

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
    return 0;
}