#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int max_cnt=0, cnt=0;
    for(int i=0;i<n;i++){
        if(i==0 || arr[i]==arr[i-1]){
            cnt++;
        }else cnt=0;
        if(cnt>max_cnt){
            max_cnt=cnt;
        }
    }
    cout << max_cnt;
    return 0;
}