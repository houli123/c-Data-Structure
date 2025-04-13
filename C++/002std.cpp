#include <iostream>
using namespace std;

int main(){
    cout << "Hello World2" << endl;  //endl相当于\n，使用endl要using namespace std
    /*多行
    注释
    */
    std::cout << "\nhuanhang" << "\n";
    int i=10;
    i=20;
    cout << i;

    //数据类型，这里多了string和bool
    string str = "this is str";
    bool boolean = true;  //我看只有python用大写True和False

    //常量
    const int absolute=10;
    return 0;
}