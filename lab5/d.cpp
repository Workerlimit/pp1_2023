#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool is_palin = false;

    for(int i = 0; i < s.size() / 2; i++) {
        if(s[i] == s[s.size() - i - 1]) {
            is_palin = true;
        }
    }

    if(is_palin) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}