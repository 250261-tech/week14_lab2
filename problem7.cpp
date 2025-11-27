#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    try {
        if (n==0) {
            throw 0;
        }
        if (n<0){}
        throw "Negative number";
    }
    catch(int x) {
        cout<<x<<endl;
    }
    catch (const char* x) {
        cout<<x<<endl;
    }
    return 0;
}