#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int main() {
    int a, b, c = 0;
    cin >> a >> b;
    c = sum(a, b);
    cout << c;
    return 0;
}