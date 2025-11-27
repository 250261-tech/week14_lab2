#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    string m;
    try {
        m="Too long!";
        if(s.length()>10) throw m;
        cout<<s<<endl;

    }
    catch (string m) {
        cout<<m<<endl;
    }
    return 0;
}