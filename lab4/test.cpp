#include <iostream>

using namespace std;

int main() {
    int i = 5; 
    while(i < 10) {
        cout << "first: " << ++i << endl;
        // i = i + 1;
        // cout << i;
    }

    i= 5;
    while(i < 10) {
        cout << "second: " << i++ << endl;
        // cout << i;
        // i = i + 1;
    }
    
    return 0;
}