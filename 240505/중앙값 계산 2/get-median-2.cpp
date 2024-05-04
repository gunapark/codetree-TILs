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

    cout << arr[0] << " ";
    for(int j=2;j<n;j+=2){
        sort(arr, arr+j+1);
        cout << arr[j/2] << " ";
    }

    return 0;
}