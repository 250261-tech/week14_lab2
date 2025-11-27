#include <iostream>
using namespace std;
#include <exception>
class MyError : public exception {
public:
    const char* m() const noexcept{
        return "Odd";
    };
};

int main() {
    int n;
    cin>>n;
    try {
        if (n%2!=0) {
            throw MyError();
        }
        cout << "Even" << endl;
    }
    catch (const MyError& x) {
        cout << x.m() << endl;

    }
}