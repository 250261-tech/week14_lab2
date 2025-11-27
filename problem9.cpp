#include <iostream>
using namespace std;


void func() {
    throw "Caught in main";
}

int main() {
    try {
        func();
    }
    catch (const char* s) {
        cout << s << endl;
    }
    return 0;
}