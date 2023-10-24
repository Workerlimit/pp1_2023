#include <iostream>
using namespace std;

int main() {
    int a;
    bool is_prime = true;
    cin >> a;
    if(a == 0 || a == 1) is_prime = false;

    for(int i = 2; i <= a/2; i++) {
        if(a%i==0) {
            is_prime = false;
            break;
        }
    }

    if(is_prime) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}