#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i >= j) {
                cout << "[*]";
            }
        }
        cout << endl;
    }
    return 0;
}