#include <iostream>

using namespace std; 

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    cout << (a & b);


    // 3, 2 
    // 1min: 2 - one side. s1, s2
    // 2min: s1, but on another side, s3
    // 3min: s1 is ready, s2 (2nd), s3 (2nd)

    return 0;
}