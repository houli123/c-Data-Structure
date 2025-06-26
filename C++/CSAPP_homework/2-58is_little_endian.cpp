#include <iostream>
#include <climits>
#include <vector>

using namespace std;

typedef unsigned char *byte_pointer;

int is_little_endian() {
	short s = 1;
	byte_pointer p = (byte_pointer)&s;
	return *p;
}

int main() {
    if (is_little_endian()) {
        cout << "小端字节序" << endl;
    } else {
        cout << "大端字节序" << endl;
    }
    return 0;
}