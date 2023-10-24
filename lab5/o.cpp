#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    char max = 'a';
    for(int i = 0; i < s.size(); i++) {
        if(s[i] > max) max = s[i];
    }
    cout << max;
}