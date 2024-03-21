#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i=0;
    cin >> n;
    int arr[100];
    arr[0]=1;
    arr[1]=n;
    for(int i=2;i<100;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    while(arr[i]<100){
        cout << arr[i] <<" ";
        i++;
    }
    cout << arr[i];
    return 0;
}