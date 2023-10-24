#include <iostream>
using namespace std;

int main() {
    int a;
    int max = 0;
    while(cin >> a){
        if(max < a) {
            max = a;
        }
        if(cin.get() == '\n') {
            cout << max;
            return 0;
        }
    }
    return 0;
}