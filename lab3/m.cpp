#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;
    while(cin >> a) {
        sum += a;
        if(cin.get() == '\n') {
            cout << sum;
            return 0;
        }
    }
    return 0;
}