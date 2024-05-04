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
    
    cout << arr[0] << " ";
    for(int i=2;i<n;i+=2){
        cout << arr[i/2] << " ";
    }
    return 0;
}