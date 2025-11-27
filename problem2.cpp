#include <iostream>
using namespace std;


int main() {
    int arr[4] = {10,20,30,40};
    int n;
    string s;
    cin>>n;
    try {
        if (0>n or n>4) {
            s="Outside of range";
            throw s;
        }
        else {
            cout<<arr[n];
        }
    }
    catch(string s) {
        cout<<s<<endl;
    }
    return 0;
}