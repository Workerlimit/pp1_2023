#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if(t.size() < s.size()) {
        cout << "NO";
        return 0;
    }

    for(int i = 0; i < t.size(); i += s.size()) {
        if(s != t.substr(i, s.size())) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}