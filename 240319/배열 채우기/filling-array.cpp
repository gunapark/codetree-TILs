#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int i=0;
    
    for(int j=0;j<10;j++){
        cin >> arr[j];
        if(arr[j]==0){
            i=j;
            break;
        }
        
    }
    for(i=i-1;i>=0;i--){
            cout << arr[i] << " ";
        }
    return 0;
}