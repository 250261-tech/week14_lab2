#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    string s;
    try {
        if (b==0) {
            s="Division by zero!";
            throw s;
        }
        else {
            cout<<a/b;
        }

    }
    catch(string s) {
        cout<<s<<endl;
    }
    return 0;


}