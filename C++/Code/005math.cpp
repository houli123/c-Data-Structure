#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << max(3,10) << endl;
    cout << min(3,10) << endl;
    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;

    string str = 1>2 ? "1 is better" : "2 is better";
    cout << str;
    return 0;
}