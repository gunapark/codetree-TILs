#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max_index[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int max = 0;
    int index = 0;
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max_index[index]=i+1;
            max = arr[i];
            index++;
        }
    }
    for(int i=index-1;i>=0;i--){
        cout << max_index[i] << " ";
    }

    return 0;
}