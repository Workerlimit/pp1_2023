#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin >> a;
    int b = sqrt(a);
    if(b * b == a) cout << "YES";
    else cout << "NO";
    return 0;
}