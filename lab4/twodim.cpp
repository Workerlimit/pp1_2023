#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(i == 0 || j == 0) {
                cout << i + j << " ";
            } else {
                cout << i + j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}