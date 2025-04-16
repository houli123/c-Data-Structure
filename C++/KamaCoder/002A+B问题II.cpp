#include <iostream>
using namespace std;

int main(){
    int N,a,b;
    while(cin >> N)
        for(int i = 0; i < N; i++){
            cin >> a >> b;
            cout << a + b << endl;
        }
    return 0;
}