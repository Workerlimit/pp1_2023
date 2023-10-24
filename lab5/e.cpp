#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum_odd = 0, sum_even = 0;

    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0) {
            sum_even += s[i];
        } else {
            sum_odd += s[i]; 
        }
    }

    if(sum_even == sum_odd) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}