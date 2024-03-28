#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt=0;
    cin >> n; 
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
            
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max)
            cnt++;
    }
    int max_sec = INT_MIN;
    if(cnt >=2){
        cout << max << " " << max;
    } else{
        for(int i=0;i<n;i++){
            if(arr[i]> max_sec && arr[i]<max){
                max_sec=arr[i];
            }
        } cout << max << " " << max_sec;
    }
    
    return 0;
}