#include <iostream>
#include <algorithm>
using namespace std;

int maximum(int n,int *arr){
    if(n==0) return arr[0];
    
    if(arr[n]>maximum(n-1,arr)) return arr[n];
    else return maximum(n-1,arr);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << maximum(n-1,arr);
    return 0;
}