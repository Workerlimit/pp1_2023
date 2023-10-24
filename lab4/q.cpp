#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int left = n - 1, right = n - 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n*2 - 1; j++) {
            if(j >= left && j <= right) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        --left;
        ++right;
        cout << endl;
    }

    return 0;
}