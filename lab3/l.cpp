#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    cin >> b;
    int arr2[b];
    for(int i = 0; i < b; i++) {
        cin >> arr2[i];
    }
    
    int merged[a+b], k = 0;
    for(int i = 0; i < a; i++) {
        merged[i] = arr[i];
    }

    for(int i = 0; i < b; i++) {
        merged[a] = arr2[i];
    }

    for(int i = 0; i < a+b; i++) {
        cout << merged[i] << " ";
    }
    return 0;
}