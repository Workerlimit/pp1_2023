#include <iostream>

using namespace std;

int main() {
    int n, maxPos;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++) {
        if(arr[0] < arr[i]) {
            maxPos = i + 1;
        }
    }
    cout << maxPos;
    return 0;
}