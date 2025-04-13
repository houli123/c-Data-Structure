#include <iostream>
using namespace std;

int main(){
    // references是指针的意思吧
    string food = "Pizza";
    string &meal = food;   //meal指向food地址，使用meal和food值相同，而&meal才是food的地址

    cout << meal << endl;
    cout << &food << endl;
    cout << &meal;
    return 0;
}