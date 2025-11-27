#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    try {
        if (n>100) {
            throw n;
        }

    }
    catch (int n) {
        cout<<"Error: "<<n<<endl;
    }
    return 0;
}