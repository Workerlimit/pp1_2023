#include <iostream>
using namespace std;

int main() {
    int s_arr[26] = {0};
    int t_arr[26] = {0};

    string s, t;
    cin >> s >> t;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 97 && s[i] <= 122) s_arr[s[i]-97]++;
    }

    for(int i = 0; i < t.size(); i++) {
        if(t[i] >= 97 && t[i] <= 122) t_arr[t[i]-97]++;
    }

    for(int i = 0; i < 26; i++) {
        if(s_arr[i] != t_arr[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;

}