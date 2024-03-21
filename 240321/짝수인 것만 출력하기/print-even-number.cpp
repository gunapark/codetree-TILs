#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    cin >> n;
    int arr_1[n];
    int arr_2[n];

    for(int i=0;i<n;i++){
        cin >> arr_1[i];
        if(arr_1[i]%2==0){
            arr_2[cnt]=arr_1[i];
            cnt++;
        }
    }
    for(int i=0;i<cnt;i++){
        cout << arr_2[i] << " ";
    }
    return 0;
}