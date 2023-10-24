#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int capCnt = 0, smallCnt = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            capCnt++;
        } else {
            smallCnt++;
        }
    }

    cout << smallCnt << " " << capCnt;
    return 0;
}