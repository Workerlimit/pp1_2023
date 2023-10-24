#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++){
        cin >> arr[i];
    }
    if(num == 1) {
        cout << arr[0];
    } else {
        for(int i = 0; i < num; i++) {
            if(i != num - 1 && arr[i] == arr[i+1]) {
                i++;
            }
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}