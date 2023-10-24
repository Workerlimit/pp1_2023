#include <iostream>

using namespace std;

int main() {  
    int n = 0, sum = 0;
    while (cin >> n) {
        sum += n;
        if(cin.get() == '\n') {
            cout << sum;
            return 0;
        }
    }
    return 0;
}