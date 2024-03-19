#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int i=0;
    
    for(i=0;i<10;i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
    }
    if(i==9){
        i++;
    }
    for(i--;i>=0;i--){
        cout << arr[i] << " ";
    }
    return 0;
}