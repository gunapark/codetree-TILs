#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min =100;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<min)
            min = arr[i+1]-arr[i];
    }
    cout << min;
    return 0;
}