#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n==0)
            return 0;
        int s=0,a;
        for(int i=0;i<n;i++){
            cin >> a;
            s+=a;
        }
        cout << s << endl;
    }
    return 0;
}