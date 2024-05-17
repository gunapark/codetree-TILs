#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    
    cin >> n >> t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int cnt=0, max_cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>t && (i==0 || arr[i]>arr[i-1])) cnt++;
        else if(arr[i]>t) cnt=1;
        else if(arr[i]<=t) cnt=0;
        max_cnt = max(cnt, max_cnt);
    }

    if(max_cnt==0){
        cout << 0;
        return 0;
    }
    cout << max_cnt;
    return 0;
}