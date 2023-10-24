#include <iostream>
using namespace std;

int main() {
    string s, s1;
    cin >> s;
    cin >> s1;
    bool is_sub = false;
    for(int i = 0; i < s.size(); i++) {
        if(s.substr(i, s1.size()) == s1) {
            is_sub = true;
        } 
    }

    if(is_sub) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}