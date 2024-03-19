#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10], i=0;
    for(i;i<10;i++){
        int a;
        cin >> a;
        if (a==0){
            i--;
            break;
        }
        arr[i]=a;
    }
    for(i;i>=0;i--){
        cout << arr[i] << " ";
    }

    return 0;
}