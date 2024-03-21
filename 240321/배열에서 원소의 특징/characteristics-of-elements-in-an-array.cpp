#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int index =9;
    int arr[10];
    for(int i=0;i<10;i++){
        cin >>arr[i];
        if(arr[i]%3==0){
            index = i-1;
            break;
        }
    }
    cout << arr[index];
    return 0;
}