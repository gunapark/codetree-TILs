#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    int max_low=0, min_high=1000;

    for(int i=0;i<10;i++){
        if(arr[i]<500 && arr[i]>max_low)
            max_low = arr[i];
        if(arr[i]>=500 && arr[i]<min_high)
            min_high = arr[i];
    }
    cout << max_low << " " << min_high;
    return 0;
}