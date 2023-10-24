#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int arr[10] = {0};

    for(int i = 0; i < s.size(); i++) {
        arr[s[i] - '0']++;
    }

    int digit = -1;
    for(int i = 0; i < 10; i++) {
        if(arr[i] > 0) {
            if(digit == -1) digit = arr[i];
            else if(digit != arr[i]) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;

}