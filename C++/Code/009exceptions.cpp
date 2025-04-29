#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0;
    try{
        cout << "Enter two integers: ";
        cin >> a >> b;
        //非数字异常
        if(cin.fail()) 
            throw "Invalid input!"; //抛出异常
        else if(b == 0) 
            throw "Division by zero!"; //抛出异常
        cout << "Result: " << a / b << endl;
    }catch(const char* msg){ //捕获上面抛出来的字符串异常信息
        cout << "Error: " << msg << endl;
    }
    catch(...){ //捕获其他异常，包括所有类型的异常。注意：catch(...)必须放在最后一个catch后面
        cout << "Unknown error occurred!" << endl;
    }
    return 0;
}