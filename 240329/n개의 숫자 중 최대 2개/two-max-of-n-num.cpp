#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n; 
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    int max_sec = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max_sec && arr[i]<max)
            max_sec=arr[i];
    }
    cout << max << " " << max_sec;
    return 0;
}