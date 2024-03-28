#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    int min_int;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    min_int=arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i]<min_int){
            min_int = arr[i];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==min_int){
            cnt++;
        }
    }
    cout << min_int << " " << cnt;
    return 0;
}