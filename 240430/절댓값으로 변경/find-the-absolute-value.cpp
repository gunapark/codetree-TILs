#include <iostream>
using namespace std;

int n;

void modify(int *arr){
    for(int i=0;i<n;i++){
        arr[i] = abs(arr[i]);
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    modify(arr);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}