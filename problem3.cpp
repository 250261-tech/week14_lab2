#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    try {
       if (n<0) {
           s="Negative values not allowed";
           throw s;
       }
        else {
            cout<<n*n<<endl;
        }
    }
    catch(string s) {
        cout<<s<<endl;
    }
    return 0;



}