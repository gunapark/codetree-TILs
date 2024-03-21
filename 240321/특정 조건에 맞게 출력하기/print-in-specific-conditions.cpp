#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int i;
    for(i=0;i<100;i++){
        cin >> arr[i];
        if(arr[i]==0){
            break;
        }
    }
    for(int j=0;j<i;j++){
        if(arr[j]%2==0){
            cout << arr[j]/2 << " ";
        } else
            cout << arr[j]+3 <<" ";
    }
    return 0;
}