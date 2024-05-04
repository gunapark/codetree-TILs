#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr_A[n], arr_B[n];
    for(int i=0;i<n;i++){
        cin >> arr_A[i];
    }
    for(int i=0;i<n;i++){
        cin >> arr_B[i];
    }
    sort(arr_A, arr_A +n);
    sort(arr_B, arr_B +n);

    for(int i=0;i<n;i++){
        if(arr_A[i]!=arr_B[i]){
            cout << "No"; break;
        }
        if(i==n-1 && arr_A[i]==arr_B[i]) cout << "Yes";
    }
    return 0;
}