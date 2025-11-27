#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string s;
    ifstream file("data.txt");
    try {
        if (!file.is_open()) {
            s="File not found";
            throw s;
        }
        int n;
        file>>n;
        cout<<n<<endl;
    }
    catch (string s) {
        cout<<s<<endl;
    }
    file.close();
    return 0;
}