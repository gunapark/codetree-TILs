#include <iostream>
using namespace std;
int n;
void modify_arr(int *arr){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout << arr[i]/2 << " ";
        } else cout << arr[i] << " ";
    }
}

int main() {
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    modify_arr(arr);

    return 0;
}