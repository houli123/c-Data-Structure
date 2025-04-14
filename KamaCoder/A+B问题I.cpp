#include <iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    while(cin >> a >> c >> b){
        if(!a || !b)
            return 0;
        cout << a+b;
    }
    return 0;
}