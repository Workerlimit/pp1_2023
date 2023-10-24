#include <iostream>
using namespace std;

int main() {
    int a, l, r;
    long long sum = 0;
    cin >> a;
    cin >> l;
    cin >> r;

    int arr[a];
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
        if(l <= (i + 1) && (i + 1) <= r) {
            sum += arr[i];
        }
    }
    
    cout << sum;

    while(cin >> a) {
        
    }
    return 0;
}