#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    int count = 0;

    int posX = 0, posY = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int bottom = 0;
            count++;
            if(j + bottom == n - 1) { // bottom
                count = n + i;
                bottom++;
                cout << count << "qw" << bottom;
            }
            else if(i == n - 1) { // left
                count = n * 3 - 2;
                cout << count - j << " ";
            }
            else if(j == 0 && i != 0) { // up
                count = n * 3 - 2 + (n - 1) - i;
                cout << count << " ";
            } 
            else { // right 
                cout << count << " ";
                // count++;
            }
            
        }
        cout << endl;
    }
    return 0;
}