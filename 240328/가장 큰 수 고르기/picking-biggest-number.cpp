#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int max_int;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    
    max_int=arr[0];

    for(int i=1;i<10;i++){
        if(arr[i]>max_int){
            max_int = arr[i];
        }
    }
    cout << max_int;
    return 0;
}