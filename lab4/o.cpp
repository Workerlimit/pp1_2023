#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    int max = INT_MIN;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int posX, posY;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && arr[i][j] > max) {
                max = arr[i][j];
                posX = i + 1;
                posY = j + 1;
            }
        }
    }

    cout << "Maximum element is: " << max << " with coordinates: " << posX << ";" << posY;
    return 0;
}