#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    try {
        if (n%2==0) {
            cout<<"even"<<endl;
            throw "Done";
        }
        throw "Done";
    }
    catch (const char* msg) {
        cout<<msg<<endl;
    }
    return 0;
}