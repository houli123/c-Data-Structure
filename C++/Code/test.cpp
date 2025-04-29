// 试计算机的运行速度
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace chrono;

// O(n)
void func1(long long n) {
    long long k = 0;
    for (long long i = 0; i < n; i++) {
        k++;
    }
}

// O(n^2)
void func2(long long n) {
    long long k = 0;
    for (long long i = 0; i < n; i++)
        for(long long j = 0; j < n; j++)
            k++;
}

// O(nlogn)
void func3(long long n) {
    long long k = 1;
    for (long long i = 0; i < n; i++)
        for (long long j = 1; j < n; j *= 2)
            k++;
}

int main(){
    long long n;//数据规模
    while (1) {
        cout<<"输入n:";
        cin >> n;
        milliseconds start_time = duration_cast<milliseconds >(
            system_clock::now().time_since_epoch()
        );
        // func1 (n);   // O(n)的算法一秒可以进行3300000000次运算
        // func2 (n);   // O(n^2)的算法一秒可以进行57445次运算
        func3 (n);  // O(nlogn)的算法一秒可以进行120000000次运算
        milliseconds end_time = duration_cast<milliseconds >(
            system_clock::now().time_since_epoch()
        );
        cout <<"耗时:"<<milliseconds (end_time).count() - milliseconds(start_time).count() <<" ms"<< endl;
    }
}     