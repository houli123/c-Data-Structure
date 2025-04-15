#include <iostream>
#include <fstream>  //使用文件需要包含这个头文件
#include <string>  //使用getline最好包括它，不然不报错但会提示
using namespace std;


int main(){
    // 一个输出文件流out file stream
    ofstream MyFile("filename.txt");
    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!\n222\n333";
    // Close the file
    MyFile.close();  //记得关闭文件

    // 读取文件：in file stream
    ifstream MyReadFile("filename.txt");
    string line;

    while(getline(MyReadFile, line)){
        cout << line << endl;  //输出文件内容
    }
    MyReadFile.close(); 
    return 0;
}