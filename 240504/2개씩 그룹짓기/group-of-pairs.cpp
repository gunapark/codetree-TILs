#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n*2];
    for(int i=0;i<2*n;i++){
        cin >> arr[i];
    }

    sort(arr, arr+2*n);
    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]+arr[2*n-1-i]>=max) max = arr[i]+arr[2*n-1-i];
    }
    cout << max;
    return 0;
}