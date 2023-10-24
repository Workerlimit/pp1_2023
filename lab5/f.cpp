#include <iostream>
using namespace std;

int main() {
    string s;
    int l, r;
    cin >> s;
    cin >> l >> r;
    
    cout << s.substr(l, r + 1);

    return 0;
}